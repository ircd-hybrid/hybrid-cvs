/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  io_win32.c: IO functions for Win32
 *
 *  Copyright (C) 2002 Aaron Sethman <androsyn@ratbox.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
 *  USA
 *
 * $Id: io_win32.c,v 1.1.2.2 2002/05/26 18:54:12 androsyn Exp $
 *
 */


void initIO(void)
{
	 io_blockheap = BlockHeapCreate(sizeof(IO), 256);
	 fde_blockheap = BlockHeapCreate(sizeof(fde), 256);
	

}

/* This assumes that the IO handle is an FD!!! */ 
#define IO_getfd(x) x->ioh->F->fd


static int IO_nonblocking(IO *io)
{
	if(io->iotype == IO_FD)
	{
		int val = 1;
		if(ioctlsocket(IO_getfd(io), FIONBIO, &val) != -1)
		{
			return 1;
		} 
	} else {
		return 1;
	} 
	errno = WSAGetLastError();
	return -1;	 

}



IO *IO_accept(IO *io, struct sockaddr *sock, int len)
{
	if(io->iotype == IO_FD)
	{
		int fd;
		IO *newio;
		fd = accept(IO_getfd(io), sock, &len);	
		if(fd < 0)
		{
			errno = WSAGetLastError();
			return NULL;
		}
		newio = IO_newfd(fd, FD_SOCKET);
		if(IO_nonblocking(io) == -1)
		{
			ilog(L_CRIT, "IO_socket: Couldn't set FD %d non blocking: %s", fd, strerror(errno));
			IO_close(io);
			return NULL;
		}
		return(newio):		
	}
	errno = EINVAL;
	return NULL;
	
}

IO *IO_newfd(int fd, int fdtype)
{
	io = BlockHeapAlloc(io_blockheap);
	memset(io, 0, sizeof(IO));
	io->iotype = IO_FD;
	io->ioh->fde = BlockHeapAlloc(fde_blockheap);
	memset(io->ioh->fde, 0, sizeof(fde));
	io->ioh->fde->fd = fd;
	io->ioh->fde->type = fdtype;
	return(io);
}

IO *IO_open(const char *file, int flags, ...)
{
	int fd, mode;
	
	va_list ap;
	va_start(ap, flags);
	mode = va_arg(ap, int);
	fd = open(file, flags, mode);
	if(fd < 0)
	{
		return NULL;
	}
	return(IO_newfd(FD, FD_FILE));
}

IO *IO_socket(int family, int sock_type, int proto, const char *note)
{
	int fd;
	IO *io;
	fd = socket(family, sock_type, int proto) 
	if(fd < 0)
	{
		errno = WSAGetLastError();
		return NULL;
	}
	io = IO_newfd(fd, FD_SOCKET);
	if(IO_nonblocking(io) == -1)
	{
		ilog(L_CRIT, "IO_socket: Couldn't set FD %d non blocking: %s", fd, strerror(errno));
		comm_close(io);
		return NULL;
	}
	return(io);
}

int IO_write(IO *io, void *data, size_t len)
{
	switch(io->iotype)
	{
		case IO_FD:
		{
			fde_t *F = io->ioh->F;
			switch(F->type)
			{
				case FD_SOCKET:
				{
					int ret;
					ret = send(F->fd, data, len, 0);
					errno = WSAGetLastError();
					return(ret);
				}
				case FD_FILE:
				{
					return(write(F->fd, data, len));
				}
			}
		}
	}
	errno = EINVAL;
	return -1;
}

int IO_read(IO *io, void *data, size_t len)
{
	switch(io->iotype)
	{
		case IO_FD:
		{
			fde_t *F = io->io_handlers->F;
			switch(F->type)
			{
				case FD_SOCKET:
				{
					int ret;
					ret = recv(F->fd, data, len, 0);
					errno = WSAGetLastError();
					return(ret);
				}
				case FD_FILE:
				{
					return(read(F->fd, data, len));
				}
			}
		}
	}
	errno = EINVAL;
	return -1;
}

void IO_close(IO *io, void *data, size_t len)
{
	switch(io->iotype)
	{
		case IO_FD:
		{
			fde_t *F = io->ioh->F;
			switch(F->type)
			{
				case FD_SOCKET:
				{
					int ret;
					ret = closesocket(F->fd);
				}
				case FD_FILE:
				{
					close(fd);
				}
			}
			BlockHeapFree(fde_heap, F);
		}
	}
	BlockHeapFree(io_heap, io);
}


