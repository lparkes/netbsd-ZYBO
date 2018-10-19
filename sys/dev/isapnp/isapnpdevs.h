/*	$NetBSD$	*/

/*
 * THIS FILE IS AUTOMATICALLY GENERATED.  DO NOT EDIT.
 *
 * generated from:
 *	NetBSD: isapnpdevs,v 1.69 2015/11/19 19:16:10 christos Exp
 */


/*-
 * Copyright (c) 1998, 1999, 2000, 2001 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Christos Zoulas.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * Use "make -f Makefile.isapnpdevs" to regenerate isapnpdevs.h and
 * isapnpdevs.c
 */

/*
 * List of known drivers
 */
struct isapnp_matchinfo {
	const char *name;
	int variant;
};

struct isapnp_devinfo {
	const struct isapnp_matchinfo *devlogic;
	int nlogic;
	const struct isapnp_matchinfo *devcompat;
	int ncompat;
};

/* Adaptec SCSI */
extern const struct isapnp_devinfo isapnp_aha_devinfo;
/* Adaptec SCSI */
extern const struct isapnp_devinfo isapnp_aic_devinfo;
/* Aironet 802.11 */
extern const struct isapnp_devinfo isapnp_an_devinfo;
/* AT Parallel Port */
extern const struct isapnp_devinfo isapnp_atppc_devinfo;
/* National Semiconductor Serial */
extern const struct isapnp_devinfo isapnp_com_devinfo;
/* Cirrus Logic Crystal CS89x0 Ethernet */
extern const struct isapnp_devinfo isapnp_cs_devinfo;
/* 3Com 3CXXX Ethernet */
extern const struct isapnp_devinfo isapnp_ep_devinfo;
/* Symbios SYM53C416 SCSI */
extern const struct isapnp_devinfo isapnp_esp_devinfo;
/* ESS Audio Drive */
extern const struct isapnp_devinfo isapnp_ess_devinfo;
/* Fujitsu FMV-18x Ethernet */
extern const struct isapnp_devinfo isapnp_fmv_devinfo;
/* Generic Joystick */
extern const struct isapnp_devinfo isapnp_joy_devinfo;
/* Gravis Ultrasound */
extern const struct isapnp_devinfo isapnp_gus_devinfo;
/* Lance Ethernet */
extern const struct isapnp_devinfo isapnp_le_devinfo;
/* MPU-401 MIDI UART */
extern const struct isapnp_devinfo isapnp_mpu_devinfo;
/* NE2000 Ethernet */
extern const struct isapnp_devinfo isapnp_ne_devinfo;
/* PCMCIA bridge */
extern const struct isapnp_devinfo isapnp_pcic_devinfo;
/* Creative Soundblaster */
extern const struct isapnp_devinfo isapnp_sb_devinfo;
/* TROPIC Token-Ring */
extern const struct isapnp_devinfo isapnp_tr_devinfo;
/* Western Digital Disk Controller */
extern const struct isapnp_devinfo isapnp_wdc_devinfo;
/* Microsoft Sound System */
extern const struct isapnp_devinfo isapnp_wss_devinfo;
/* Yamaha Sound */
extern const struct isapnp_devinfo isapnp_ym_devinfo;