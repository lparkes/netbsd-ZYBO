/*	$NetBSD: omap2_obioreg.h,v 1.7 2012/12/11 01:54:42 khorben Exp $	*/

/*
 * Copyright (c) 2007 Microsoft
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by Microsoft
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTERS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */
#ifndef _ARM_OMAP_OMAP2_OBIOREG_H_
#define _ARM_OMAP_OMAP2_OBIOREG_H_

#include <arm/omap/omap2_reg.h>

#if defined(OMAP_2430) || defined(OMAP_2420)
#define	OMAP2_OBIO_0_BASE	OMAP2430_L4_CORE_BASE
#define	OMAP2_OBIO_0_SIZE	OMAP2430_L4_CORE_SIZE

#define	OMAP2_OBIO_1_BASE	OMAP2430_L4_WAKEUP_BASE
#define	OMAP2_OBIO_1_SIZE	OMAP2430_L4_WAKEUP_SIZE
#endif

#if defined(OMAP_2420)
#define	GPIO1_BASE		GPIO1_BASE_2420
#define	GPIO2_BASE		GPIO2_BASE_2420
#define	GPIO3_BASE		GPIO3_BASE_2420
#define	GPIO4_BASE		GPIO4_BASE_2420
#endif

#if defined(OMAP_2430)
#define	GPIO1_BASE		GPIO1_BASE_2430
#define	GPIO2_BASE		GPIO2_BASE_2430
#define	GPIO3_BASE		GPIO3_BASE_2430
#define	GPIO4_BASE		GPIO4_BASE_2430
#define	GPIO5_BASE		GPIO5_BASE_2430
#endif

#if defined(OMAP_3430)
#define	OMAP2_OBIO_0_BASE	OMAP3430_L4_CORE_BASE
#define	OMAP2_OBIO_0_SIZE	OMAP3430_L4_CORE_SIZE

#define	OMAP2_OBIO_1_BASE	OMAP3430_L4_WAKEUP_BASE
#define	OMAP2_OBIO_1_SIZE	OMAP3430_L4_WAKEUP_SIZE

#define	OMAP2_OBIO_2_BASE	OMAP3430_L4_PERIPHERAL_BASE
#define	OMAP2_OBIO_2_SIZE	OMAP3430_L4_PERIPHERAL_SIZE

#define	OMAP2_OBIO_3_BASE	OMAP3430_L4_EMULATION_BASE
#define	OMAP2_OBIO_3_SIZE	OMAP3430_L4_EMULATION_SIZE

#define	GPIO1_BASE		GPIO1_BASE_3430
#define	GPIO2_BASE		GPIO2_BASE_3430
#define	GPIO3_BASE		GPIO3_BASE_3430
#define	GPIO4_BASE		GPIO4_BASE_3430
#define	GPIO5_BASE		GPIO5_BASE_3430
#define	GPIO6_BASE		GPIO6_BASE_3430
#endif

#if defined(OMAP_3530)
#define	OMAP2_OBIO_0_BASE	OMAP3530_L4_CORE_BASE
#define	OMAP2_OBIO_0_SIZE	OMAP3530_L4_CORE_SIZE

#define	OMAP2_OBIO_1_BASE	OMAP3530_L4_WAKEUP_BASE
#define	OMAP2_OBIO_1_SIZE	OMAP3530_L4_WAKEUP_SIZE

#define	OMAP2_OBIO_2_BASE	OMAP3530_L4_PERIPHERAL_BASE
#define	OMAP2_OBIO_2_SIZE	OMAP3530_L4_PERIPHERAL_SIZE

#define	OMAP2_OBIO_3_BASE	OMAP3530_L4_EMULATION_BASE
#define	OMAP2_OBIO_3_SIZE	OMAP3530_L4_EMULATION_SIZE

#define	GPIO1_BASE		GPIO1_BASE_3530
#define	GPIO2_BASE		GPIO2_BASE_3530
#define	GPIO3_BASE		GPIO3_BASE_3530
#define	GPIO4_BASE		GPIO4_BASE_3530
#define	GPIO5_BASE		GPIO5_BASE_3530
#define	GPIO6_BASE		GPIO6_BASE_3530
#endif

#if defined(OMAP_4430)
#define	OMAP2_OBIO_0_BASE	OMAP4430_L4_CORE_BASE
#define	OMAP2_OBIO_0_SIZE	OMAP4430_L4_CORE_SIZE

#define	OMAP2_OBIO_1_BASE	OMAP4430_L4_WAKEUP_BASE
#define	OMAP2_OBIO_1_SIZE	OMAP4430_L4_WAKEUP_SIZE

#define	OMAP2_OBIO_2_BASE	OMAP4430_L4_PERIPHERAL_BASE
#define	OMAP2_OBIO_2_SIZE	OMAP4430_L4_PERIPHERAL_SIZE

#define	OMAP2_OBIO_3_BASE	OMAP4430_L4_ABE_BASE
#define	OMAP2_OBIO_3_SIZE	OMAP4430_L4_ABE_SIZE

#define	GPIO1_BASE		GPIO1_BASE_4430
#define	GPIO2_BASE		GPIO2_BASE_4430
#define	GPIO3_BASE		GPIO3_BASE_4430
#define	GPIO4_BASE		GPIO4_BASE_4430
#define	GPIO5_BASE		GPIO5_BASE_4430
#define	GPIO6_BASE		GPIO6_BASE_4430
#endif

#if defined(OMAP_5430)
#define	OMAP2_OBIO_0_BASE	OMAP5430_L4_CORE_BASE
#define	OMAP2_OBIO_0_SIZE	OMAP5430_L4_CORE_SIZE

#define	OMAP2_OBIO_1_BASE	OMAP5430_L4_WAKEUP_BASE
#define	OMAP2_OBIO_1_SIZE	OMAP5430_L4_WAKEUP_SIZE

#define	OMAP2_OBIO_2_BASE	OMAP5430_L4_PERIPHERAL_BASE
#define	OMAP2_OBIO_2_SIZE	OMAP5430_L4_PERIPHERAL_SIZE

#define	OMAP2_OBIO_3_BASE	OMAP5430_L4_ABE_BASE
#define	OMAP2_OBIO_3_SIZE	OMAP5430_L4_ABE_SIZE

#define	GPIO1_BASE		GPIO1_BASE_5430
#define	GPIO2_BASE		GPIO2_BASE_5430
#define	GPIO3_BASE		GPIO3_BASE_5430
#define	GPIO4_BASE		GPIO4_BASE_5430
#define	GPIO5_BASE		GPIO5_BASE_5430
#define	GPIO6_BASE		GPIO6_BASE_5430
#define	GPIO7_BASE		GPIO7_BASE_5430
#define	GPIO8_BASE		GPIO8_BASE_5430
#endif

#if defined(TI_AM335X)
#define	OMAP2_OBIO_0_BASE	TI_AM335X_L4_WAKEUP_BASE
#define	OMAP2_OBIO_0_SIZE	TI_AM335X_L4_WAKEUP_SIZE

#define	OMAP2_OBIO_1_BASE	TI_AM335X_L4_PERIPHERAL_BASE
#define	OMAP2_OBIO_1_SIZE	TI_AM335X_L4_PERIPHERAL_SIZE

#define	OMAP2_OBIO_2_BASE	TI_AM335X_L4_FAST_BASE
#define	OMAP2_OBIO_2_SIZE	TI_AM335X_L4_FAST_SIZE

#define	GPIO1_BASE		GPIO1_BASE_TI_AM335X
#define	GPIO2_BASE		GPIO2_BASE_TI_AM335X
#define	GPIO3_BASE		GPIO3_BASE_TI_AM335X
#endif

#if defined(TI_DM37XX)
#define	OMAP2_OBIO_0_BASE	TI_DM37XX_L4_CORE_BASE
#define	OMAP2_OBIO_0_SIZE	TI_DM37XX_L4_CORE_SIZE

#define	OMAP2_OBIO_1_BASE	TI_DM37XX_L4_WAKEUP_BASE
#define	OMAP2_OBIO_1_SIZE	TI_DM37XX_L4_WAKEUP_SIZE

#define	OMAP2_OBIO_2_BASE	TI_DM37XX_L4_PERIPHERAL_BASE
#define	OMAP2_OBIO_2_SIZE	TI_DM37XX_L4_PERIPHERAL_SIZE

#define	OMAP2_OBIO_3_BASE	TI_DM37XX_L4_EMULATION_BASE
#define	OMAP2_OBIO_3_SIZE	TI_DM37XX_L4_EMULATION_SIZE

#define	GPIO1_BASE		GPIO1_BASE_TI_DM37XX
#define	GPIO2_BASE		GPIO2_BASE_TI_DM37XX
#define	GPIO3_BASE		GPIO3_BASE_TI_DM37XX
#define	GPIO4_BASE		GPIO4_BASE_TI_DM37XX
#define	GPIO5_BASE		GPIO5_BASE_TI_DM37XX
#define	GPIO6_BASE		GPIO6_BASE_TI_DM37XX
#endif

#endif	/* _ARM_OMAP_OMAP2_OBIOREG_H_ */