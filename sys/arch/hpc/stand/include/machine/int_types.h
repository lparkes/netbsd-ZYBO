/*	$NetBSD: int_types.h,v 1.1 2001/02/09 18:35:28 uch Exp $	*/

#if defined ARM
#include "../../../../arm/include/int_types.h"
#elif defined MIPS
#include "../../../../mips/include/int_types.h"
#elif defined SHx
#include "../../../../sh3/include/int_types.h"
#else
#error "unknown architecture"
#endif
