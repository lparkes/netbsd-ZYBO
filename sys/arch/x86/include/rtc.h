/*      $NetBSD: clock.c,v 1.30 2008/05/11 22:18:08 ad Exp $    */

#include <dev/clock_subr.h>

void rtc_register(void);
int  rtc_get_ymdhms(todr_chip_handle_t, struct clock_ymdhms *);
int  rtc_set_ymdhms(todr_chip_handle_t, struct clock_ymdhms *);
