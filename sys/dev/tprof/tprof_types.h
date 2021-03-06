/*	$NetBSD: tprof_types.h,v 1.4 2018/07/15 18:55:05 jmcneill Exp $	*/

/*-
 * Copyright (c)2010,2011 YAMAMOTO Takashi,
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
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _DEV_TPROF_TPROF_TYPES_H_
#define _DEV_TPROF_TPROF_TYPES_H_

/*
 * definitions used by both kernel and userland
 */

#if defined(_KERNEL)
#include <sys/types.h>
#else
#include <stdint.h>
#endif

typedef struct {
	uint32_t s_pid;		/* process id */
	uint32_t s_lwpid;	/* lwp id */
	uint32_t s_cpuid;	/* cpu id */
	uint32_t s_flags;	/* flags */
	uintptr_t s_pc;		/* program counter */
} tprof_sample_t;

typedef struct tprof_param {
	uint64_t p_event;	/* event class */
	uint64_t p_unit;	/* unit within the event class */
	uint64_t p_flags;
} tprof_param_t;

/* s_flags */
#define	TPROF_SAMPLE_INKERNEL	1	/* s_pc is in kernel address space */

/* p_flags */
#define	TPROF_PARAM_KERN	0x01
#define	TPROF_PARAM_USER	0x02

/* ti_ident */
#define	TPROF_IDENT_NONE		0x00
#define	TPROF_IDENT_INTEL_GENERIC	0x01
#define	TPROF_IDENT_AMD_GENERIC		0x02
#define	TPROF_IDENT_ARMV8_GENERIC	0x03
#define	TPROF_IDENT_ARMV7_GENERIC	0x04

#endif /* _DEV_TPROF_TPROF_TYPES_H_ */
