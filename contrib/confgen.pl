#!/usr/bin/perl
# confgen - a CGI application to generate hybrid-7.x ircd configurations for a network of servers using
#           an SQL database (PgSQL)
#
# Written by Alan F <alan@loonix.net>
# $Id: confgen.pl,v 1.2 2005/08/19 18:24:59 knight Exp $

use strict;
use CGI qw(:standard);
use DBD::Pg;
use vars qw($VERSION $cgi $dbh $servername $location $admin $description $adminemail $hubsequence $bindtoip $externalip $getconfpass $network_name $network_desc $ports $stuffdir $send_password $accept_password);
$VERSION = '1.4';

$network_name = 'network';
$network_desc = 'www.network.org';
$stuffdir = '/var/www/localhost/confgen';
$send_password = 'xxx';
$accept_password = 'xxx';
$ports = '6667, 6668, 7500';

$dbh = DBI->connect("dbi:Pg:dbname=$network_name", 'DBUSER', 'DBPASS') or pndie('Database connection failed. AWOOGA!');

print "Content-type: text/plain\n\n";
$cgi = new CGI;
pndie('Insufficient parameters.') unless (($cgi->param('server')) && ($cgi->param('pass')) && (($cgi->param('file')) || ($cgi->param('updated'))));

my $sth_serverinfo = $dbh->prepare("SELECT server,location,admin,description,adminemail,array_to_string(bindtoip,'+'),externalip,array_to_string(hubsequence,'+'),getconfpass FROM servers WHERE server=? LIMIT 1");
$sth_serverinfo->execute($cgi->param('server'));
$sth_serverinfo->bind_columns(\$servername, \$location, \$admin, \$description, \$adminemail, ,\$bindtoip, \$externalip, \$hubsequence, \$getconfpass);
$sth_serverinfo->fetch;
$sth_serverinfo->finish;
pndie('I don\'t know who you are, or your password is wrong.') unless (($servername) && ($location) && ($admin) && ($adminemail) && ($description) && ($externalip) && ($getconfpass eq $cgi->param('pass')));

if ($cgi->param('updated') eq 'yes') {
	timestamp('lastupdate');
	print "OK.\n";
} elsif ($cgi->param('file') eq 'serverinfo.conf') {
	confheader();
	print "serverinfo {\n",
	"\tname = \"$servername\";\n";
	if ($bindtoip) {
		my $iptobind = (split(/\+/,$bindtoip))[0];
		print "\tvhost = \"$iptobind\";\n";
	}
	print "\tdescription = \"$description\";\n",
	"\tnetwork_name = \"$network_name\";\n",
	"\tnetwork_desc = \"$network_desc\";\n",
	"\thub = yes;\n",
	"};\n\n",
	"admin {\n",
	"\tname = \"$admin\";\n",
	"\tdescription = \"Main Server Administrator\";\n",
	"\temail = \"$adminemail\";\n",
	"};\n\n",
	"listen {\n";
	if ($bindtoip) {
		foreach my $iptobind (split(/\+/,$bindtoip)) {
			print "\thost = \"$iptobind\";\n",
			"\tport = $ports;\n";
		}
	} else {
		print "\tport = $ports;\n";
	}
	print "};\n";
} elsif ($cgi->param('file') eq 'ircd.conf') {
	confheader();
	timestamp('lastcheck');
	open(IRCD,"<$stuffdir/ircd.conf") or pndie("INTERNAL ERROR");
	while (<IRCD>) {
		print "$_";
	}
	close(IRCD);
} elsif ($cgi->param('file') eq 'opers.conf') {
	confheader();
	my $sth_opers = $dbh->prepare("SELECT oper,array_to_string(hostmasks,'+'),pass,array_to_string(ircdflags,'+'),array_to_string(adminon,'+') FROM opers WHERE active ORDER BY id");
	$sth_opers->execute;
	while (my @oper = $sth_opers->fetchrow_array) {
		print "operator {\n",
		"\tname = \"$oper[0]\";\n";
		foreach my $hostmask (split(/\+/,$oper[1])) {
			print "\tuser = \"$hostmask\";\n";
		}
		print "\tpassword = \"$oper[2]\";\n",
		"\tclass = \"opers\";\n";
		foreach my $operflag (split(/\+/,$oper[3])) {
			print "\t$operflag = yes;\n";
		}
		if ($oper[4] eq 'ALL') {
			print "\tadmin = yes;\n\trehash = yes;\n\tdie = yes;\n";
		} elsif ($oper[4]) {
			foreach my $server (split(/\+/,$oper[4])) {
				if ($server eq $servername) {
					print "\tadmin = yes;\n\trehash = yes;\n\tdie = yes;\n";
					last;
				}
			}
		}
			
		print "};\n\n";
	}
} elsif ($cgi->param('file') eq 'ircd.motd') {
	open(MOTD,"<$stuffdir/ircd.motd") or pndie("INTERNAL ERROR");
	while (<MOTD>) {
		s/#SERVERNAME#/$servername/gi;
		s/#LOCATION#/$location/gi;
		s/#DESCRIPTION#/$description/gi;
		s/#ADMINEMAIL#/$adminemail/gi;
		s/#ADMIN#/$admin/gi;
		print "$_";
	}
	close(MOTD);
} elsif ($cgi->param('file') eq 'connect.conf') {
	confheader();
	my $sql = "SELECT server,externalip FROM servers WHERE server != '$servername' AND active";
	foreach my $seqserver (split(/\+/,$hubsequence)) {
		my $sth_server = $dbh->prepare("SELECT server,externalip FROM servers WHERE server=? $active LIMIT 1");
		$sth_server->execute($seqserver);
		while (my @server = $sth_server->fetchrow_array) {
			$sql .= " AND server != '$server[0]'";
			connect_block($server[0],$server[1],1);
		}
	}
	my $sth_servers = $dbh->prepare("$sql ORDER BY id");
	$sth_servers->execute;
	while (my @server = $sth_servers->fetchrow_array) {
		connect_block($server[0],$server[1]);
	}
} else {
	pndie("Unknown request.\n");
}

sub connect_block {
	print "connect {\n",
	"\tname = \"$_[0]\";\n",
	"\thost = \"$_[1]\";\n",
	"\tsend_password = \"$send_password\";\n",
	"\taccept_password = \"$accept_password\";\n",
	"\tencrypted = yes;\n",
	"\tport = 6667;\n",
	"\thub_mask = \"*\";\n",
	"\tclass = \"server\";\n";
	if ($_[2]) {
		print "\tautoconn = yes;\n";
	} else {
		print "\tautoconn = no;\n";
	}
	print "};\n\n";
}

sub confheader {
	print "/* " . $cgi->param('file') . " for $servername on the $network_name IRC network\n",
	" * do not edit this file manually!\n",
	" * generated by fubar's confgen $VERSION\n */\n\n";
}

sub timestamp {
        my $sth_timestamp = $dbh->prepare("UPDATE servers set $_[0]=abstime(timestamp 'now') WHERE server=?");
	$sth_timestamp->execute($servername);
}

sub pndie {
	print $_[0];
	die;
}

$dbh->disconnect;
