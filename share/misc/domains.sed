# $NetBSD: domains.sed,v 1.2 2003/03/02 21:32:33 jhawk Exp $
s/<[^>]*>//g
/&nbsp;&nbsp/ {
	s/&nbsp;/ /g
	s/&#[0-9]*;/ /g
	s/  */ /g
	s/^ *\.//
	s/$//
	p
}
