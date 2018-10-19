/*	$NetBSD$	*/

#if defined(__MIPSEB__)
#define	_BYTE_ORDER	_BIG_ENDIAN
#elif defined(__MIPSEL__)
#define	_BYTE_ORDER	_LITTLE_ENDIAN
#else
#error neither __MIPSEL__ nor __MIPSEB__ are defined.
#endif

#include <mips/endian_machdep.h>