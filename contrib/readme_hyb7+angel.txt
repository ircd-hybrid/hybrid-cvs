  A number of people have been chomping at the bit for the new stuff in the
HEAD of the hybrid tree. Well, here is a _partial_ backport to hybrid-7.0.
There is still a lot more coming I haven't backported.

- Dianora

- kline checking is reverted to hybrid-6 behaviour, this should alleviate
  the complaints about "sluggish" server klines. The behaviour in hybrid-6
  was to wait one io_loop() before checking clients for placed klines.
- We've added remote unkline
- A true "safelist", with borrowed constructs from undernet i.e.
  /list <10 list all channels with less than 10 members
- The redundant mode code removed
- tdline support
- quote /xline support, these are saved/restored from xline.conf
- quote resv are saved/restored from nresv.conf and cresv.conf 
- you wanted them, here they are... remote whois notices
- hidden admin support
- sjoins are shown as in old behaviour if server is not hidden

Enjoy
Dianora and the gang (Rodder, adx, MetalRock, Michael, josh, Wohali, 
			ievil, billy-jon, vulture, cryogen...)

$Id: readme_hyb7+angel.txt,v 1.1.2.1 2003/06/10 01:11:45 db Exp $
