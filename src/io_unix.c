/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  io_win32.c: IO functions for Unix(and Unix-like systems)
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
 * $Id: io_unix.c,v 1.1.2.1 2002/05/26 10:55:57 androsyn Exp $
 *
 */


void initIO(void)
{
	 io_blockheap = BlockHeapCreate(sizeof(IO), 256);
	 fde_blockheap = BlockHeapCreate(sizeof(fde), 256);
	

}

static int IO_nonblocking(IO *io)
{
	if(io->iotype == IO_FD)
	{
		int res;
		res = fcntl(fd, F_GETFL, 0);
		if(res != -1)
	 	{
	 		res |= O_NONBLOCK;
	 		if(fcntl(fd, F_SETFL, res) != -1)
	 		{
	 			return 1;
	 		} 
	 	
	 	}
	} else {
		return 1;
	} 
	return -1;	 

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
	return IO;
}

int IO_write(IO *io, void *data, size_t len)
{
	switch(io->iotype)
	{
		case IO_FD:
		{
			return(write(io->ioh->F->fd, data, len));
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
			return(read(io->ioh->F->fd, data, len));
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
			close(io->ioh->F->fd);
			BlockHeapFree(fde_heap, F);
		}
	}
	BlockHeapFree(io_heap, io);
}


