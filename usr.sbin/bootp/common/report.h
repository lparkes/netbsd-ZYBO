/*	$NetBSD: report.h,v 1.4 2000/10/11 20:23:49 is Exp $	*/

/* report.h */

extern void report_init(int);
extern void report(int, const char *, ...)
     __attribute__((__format__(__printf__, 2, 3)));
extern const char *get_errmsg(void);
