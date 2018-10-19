/* $NetBSD$ */

/*
 * System call switch table.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	NetBSD: syscalls.master,v 1.62 2013/11/07 19:37:19 njoly Exp
 */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD$");

#if defined(_KERNEL_OPT)
#include "opt_ntp.h"
#include "opt_sysv.h"
#endif
#include <sys/param.h>
#include <sys/systm.h>
#include <sys/signal.h>
#include <sys/mount.h>
#include <sys/poll.h>
#include <sys/sched.h>
#include <sys/syscallargs.h>
#include <compat/svr4/svr4_types.h>
#include <compat/svr4/svr4_time.h>
#include <compat/svr4/svr4_signal.h>
#include <compat/svr4/svr4_ucontext.h>
#include <compat/svr4/svr4_lwp.h>
#include <compat/svr4/svr4_syscallargs.h>
#include <compat/svr4/svr4_statvfs.h>
#include <compat/svr4/svr4_resource.h>
#include <compat/svr4/svr4_acl.h>
#include <compat/svr4/svr4_schedctl.h>

#define	s(type)	sizeof(type)
#define	n(type)	(sizeof(type)/sizeof (register_t))
#define	ns(type)	.sy_narg = n(type), .sy_argsize = s(type)

struct sysent svr4_sysent[] = {
	{
		.sy_call = (sy_call_t *)sys_nosys
	},		/* 0 = syscall */
	{
		ns(struct sys_exit_args),
		.sy_call = (sy_call_t *)sys_exit
	},		/* 1 = exit */
	{
		.sy_call = (sy_call_t *)sys_fork
	},		/* 2 = fork */
	{
		ns(struct sys_read_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_read
	},		/* 3 = read */
	{
		ns(struct sys_write_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_write
	},		/* 4 = write */
	{
		ns(struct svr4_sys_open_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_open
	},		/* 5 = open */
	{
		ns(struct sys_close_args),
		.sy_call = (sy_call_t *)sys_close
	},		/* 6 = close */
	{
		ns(struct svr4_sys_wait_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_wait
	},		/* 7 = wait */
	{
		ns(struct svr4_sys_creat_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_creat
	},		/* 8 = creat */
	{
		ns(struct sys_link_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_link
	},		/* 9 = link */
	{
		ns(struct sys_unlink_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_unlink
	},		/* 10 = unlink */
	{
		ns(struct svr4_sys_execv_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_execv
	},		/* 11 = execv */
	{
		ns(struct sys_chdir_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_chdir
	},		/* 12 = chdir */
	{
		ns(struct svr4_sys_time_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_time
	},		/* 13 = time */
	{
		ns(struct svr4_sys_mknod_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_mknod
	},		/* 14 = mknod */
	{
		ns(struct sys_chmod_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_chmod
	},		/* 15 = chmod */
	{
		ns(struct sys___posix_chown_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys___posix_chown
	},		/* 16 = chown */
	{
		ns(struct svr4_sys_break_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_break
	},		/* 17 = break */
	{
		ns(struct svr4_sys_stat_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_stat
	},		/* 18 = stat */
	{
		ns(struct compat_43_sys_lseek_args),
		.sy_call = (sy_call_t *)compat_43_sys_lseek
	},		/* 19 = lseek */
	{
		.sy_call = (sy_call_t *)sys_getpid
	},		/* 20 = getpid */
	{
		.sy_call = sys_nosys,
	},		/* 21 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 22 = filler */
	{
		ns(struct sys_setuid_args),
		.sy_call = (sy_call_t *)sys_setuid
	},		/* 23 = setuid */
	{
		.sy_call = (sy_call_t *)sys_getuid_with_euid
	},		/* 24 = getuid_with_euid */
	{
		.sy_call = sys_nosys,
	},		/* 25 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 26 = filler */
	{
		ns(struct svr4_sys_alarm_args),
		.sy_call = (sy_call_t *)svr4_sys_alarm
	},		/* 27 = alarm */
	{
		ns(struct svr4_sys_fstat_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_fstat
	},		/* 28 = fstat */
	{
		.sy_call = (sy_call_t *)svr4_sys_pause
	},		/* 29 = pause */
	{
		ns(struct svr4_sys_utime_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_utime
	},		/* 30 = utime */
	{
		.sy_call = sys_nosys,
	},		/* 31 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 32 = filler */
	{
		ns(struct svr4_sys_access_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_access
	},		/* 33 = access */
	{
		ns(struct svr4_sys_nice_args),
		.sy_call = (sy_call_t *)svr4_sys_nice
	},		/* 34 = nice */
	{
		.sy_call = sys_nosys,
	},		/* 35 = filler */
	{
		.sy_call = (sy_call_t *)sys_sync
	},		/* 36 = sync */
	{
		ns(struct svr4_sys_kill_args),
		.sy_call = (sy_call_t *)svr4_sys_kill
	},		/* 37 = kill */
	{
		.sy_call = sys_nosys,
	},		/* 38 = filler */
	{
		ns(struct svr4_sys_pgrpsys_args),
		.sy_call = (sy_call_t *)svr4_sys_pgrpsys
	},		/* 39 = pgrpsys */
	{
		.sy_call = sys_nosys,
	},		/* 40 = filler */
	{
		ns(struct sys_dup_args),
		.sy_call = (sy_call_t *)sys_dup
	},		/* 41 = dup */
	{
		.sy_call = (sy_call_t *)sys_pipe
	},		/* 42 = pipe */
	{
		ns(struct svr4_sys_times_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_times
	},		/* 43 = times */
	{
		.sy_call = sys_nosys,
	},		/* 44 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 45 = filler */
	{
		ns(struct sys_setgid_args),
		.sy_call = (sy_call_t *)sys_setgid
	},		/* 46 = setgid */
	{
		.sy_call = (sy_call_t *)sys_getgid_with_egid
	},		/* 47 = getgid_with_egid */
	{
		ns(struct svr4_sys_signal_args),
		.sy_call = (sy_call_t *)svr4_sys_signal
	},		/* 48 = signal */
#ifdef SYSVMSG
	{
		ns(struct svr4_sys_msgsys_args),
		.sy_call = (sy_call_t *)svr4_sys_msgsys
	},		/* 49 = msgsys */
#else
	{
		.sy_call = sys_nosys,
	},		/* 49 = filler */
#endif
	{
		ns(struct svr4_sys_sysarch_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_sysarch
	},		/* 50 = sysarch */
	{
		.sy_call = sys_nosys,
	},		/* 51 = filler */
#ifdef SYSVSHM
	{
		ns(struct svr4_sys_shmsys_args),
		.sy_call = (sy_call_t *)svr4_sys_shmsys
	},		/* 52 = shmsys */
#else
	{
		.sy_call = sys_nosys,
	},		/* 52 = filler */
#endif
#ifdef SYSVSEM
	{
		ns(struct svr4_sys_semsys_args),
		.sy_call = (sy_call_t *)svr4_sys_semsys
	},		/* 53 = semsys */
#else
	{
		.sy_call = sys_nosys,
	},		/* 53 = filler */
#endif
	{
		ns(struct svr4_sys_ioctl_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_ioctl
	},		/* 54 = ioctl */
	{
		.sy_call = sys_nosys,
	},		/* 55 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 56 = filler */
	{
		ns(struct svr4_sys_utssys_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_utssys
	},		/* 57 = utssys */
	{
		ns(struct sys_fsync_args),
		.sy_call = (sy_call_t *)sys_fsync
	},		/* 58 = fsync */
	{
		ns(struct svr4_sys_execve_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_execve
	},		/* 59 = execve */
	{
		ns(struct sys_umask_args),
		.sy_call = (sy_call_t *)sys_umask
	},		/* 60 = umask */
	{
		ns(struct sys_chroot_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_chroot
	},		/* 61 = chroot */
	{
		ns(struct svr4_sys_fcntl_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_fcntl
	},		/* 62 = fcntl */
	{
		ns(struct svr4_sys_ulimit_args),
		.sy_call = (sy_call_t *)svr4_sys_ulimit
	},		/* 63 = ulimit */
	{
		.sy_call = sys_nosys,
	},		/* 64 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 65 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 66 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 67 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 68 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 69 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 70 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 71 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 72 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 73 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 74 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 75 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 76 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 77 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 78 = filler */
	{
		ns(struct sys_rmdir_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_rmdir
	},		/* 79 = rmdir */
	{
		ns(struct sys_mkdir_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_mkdir
	},		/* 80 = mkdir */
	{
		ns(struct svr4_sys_getdents_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_getdents
	},		/* 81 = getdents */
	{
		.sy_call = sys_nosys,
	},		/* 82 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 83 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 84 = filler */
	{
		ns(struct svr4_sys_getmsg_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_getmsg
	},		/* 85 = getmsg */
	{
		ns(struct svr4_sys_putmsg_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_putmsg
	},		/* 86 = putmsg */
	{
		ns(struct sys_poll_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_poll
	},		/* 87 = poll */
	{
		ns(struct svr4_sys_lstat_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_lstat
	},		/* 88 = lstat */
	{
		ns(struct sys_symlink_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_symlink
	},		/* 89 = symlink */
	{
		ns(struct sys_readlink_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_readlink
	},		/* 90 = readlink */
	{
		ns(struct sys_getgroups_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_getgroups
	},		/* 91 = getgroups */
	{
		ns(struct sys_setgroups_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_setgroups
	},		/* 92 = setgroups */
	{
		ns(struct sys_fchmod_args),
		.sy_call = (sy_call_t *)sys_fchmod
	},		/* 93 = fchmod */
	{
		ns(struct sys___posix_fchown_args),
		.sy_call = (sy_call_t *)sys___posix_fchown
	},		/* 94 = fchown */
	{
		ns(struct svr4_sys_sigprocmask_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_sigprocmask
	},		/* 95 = sigprocmask */
	{
		ns(struct svr4_sys_sigsuspend_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_sigsuspend
	},		/* 96 = sigsuspend */
	{
		ns(struct svr4_sys_sigaltstack_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_sigaltstack
	},		/* 97 = sigaltstack */
	{
		ns(struct svr4_sys_sigaction_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_sigaction
	},		/* 98 = sigaction */
	{
		ns(struct svr4_sys_sigpending_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_sigpending
	},		/* 99 = sigpending */
	{
		ns(struct svr4_sys_context_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_context
	},		/* 100 = context */
	{
		.sy_call = sys_nosys,
	},		/* 101 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 102 = filler */
	{
		ns(struct svr4_sys_statvfs_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_statvfs
	},		/* 103 = statvfs */
	{
		ns(struct svr4_sys_fstatvfs_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_fstatvfs
	},		/* 104 = fstatvfs */
	{
		.sy_call = sys_nosys,
	},		/* 105 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 106 = filler */
	{
		ns(struct svr4_sys_waitsys_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_waitsys
	},		/* 107 = waitsys */
	{
		.sy_call = sys_nosys,
	},		/* 108 = filler */
	{
		ns(struct svr4_sys_hrtsys_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_hrtsys
	},		/* 109 = hrtsys */
	{
		.sy_call = sys_nosys,
	},		/* 110 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 111 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 112 = filler */
	{
		ns(struct svr4_sys_pathconf_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_pathconf
	},		/* 113 = pathconf */
	{
		.sy_call = sys_nosys,
	},		/* 114 = filler */
	{
		ns(struct svr4_sys_mmap_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_mmap
	},		/* 115 = mmap */
	{
		ns(struct sys_mprotect_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_mprotect
	},		/* 116 = mprotect */
	{
		ns(struct sys_munmap_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_munmap
	},		/* 117 = munmap */
	{
		ns(struct svr4_sys_fpathconf_args),
		.sy_call = (sy_call_t *)svr4_sys_fpathconf
	},		/* 118 = fpathconf */
	{
		.sy_call = (sy_call_t *)sys_vfork
	},		/* 119 = vfork */
	{
		ns(struct sys_fchdir_args),
		.sy_call = (sy_call_t *)sys_fchdir
	},		/* 120 = fchdir */
	{
		ns(struct sys_readv_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_readv
	},		/* 121 = readv */
	{
		ns(struct sys_writev_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_writev
	},		/* 122 = writev */
	{
		ns(struct svr4_sys_xstat_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_xstat
	},		/* 123 = xstat */
	{
		ns(struct svr4_sys_lxstat_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_lxstat
	},		/* 124 = lxstat */
	{
		ns(struct svr4_sys_fxstat_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_fxstat
	},		/* 125 = fxstat */
	{
		ns(struct svr4_sys_xmknod_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_xmknod
	},		/* 126 = xmknod */
	{
		.sy_call = sys_nosys,
	},		/* 127 = filler */
	{
		ns(struct svr4_sys_setrlimit_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_setrlimit
	},		/* 128 = setrlimit */
	{
		ns(struct svr4_sys_getrlimit_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_getrlimit
	},		/* 129 = getrlimit */
	{
		ns(struct sys___posix_lchown_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys___posix_lchown
	},		/* 130 = lchown */
	{
		ns(struct svr4_sys_memcntl_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_memcntl
	},		/* 131 = memcntl */
	{
		.sy_call = sys_nosys,
	},		/* 132 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 133 = filler */
	{
		ns(struct sys___posix_rename_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys___posix_rename
	},		/* 134 = rename */
	{
		ns(struct svr4_sys_uname_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_uname
	},		/* 135 = uname */
	{
		ns(struct sys_setegid_args),
		.sy_call = (sy_call_t *)sys_setegid
	},		/* 136 = setegid */
	{
		ns(struct svr4_sys_sysconfig_args),
		.sy_call = (sy_call_t *)svr4_sys_sysconfig
	},		/* 137 = sysconfig */
	{
		ns(struct compat_50_sys_adjtime_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)compat_50_sys_adjtime
	},		/* 138 = adjtime */
	{
		ns(struct svr4_sys_systeminfo_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_systeminfo
	},		/* 139 = systeminfo */
	{
		.sy_call = sys_nosys,
	},		/* 140 = filler */
	{
		ns(struct sys_seteuid_args),
		.sy_call = (sy_call_t *)sys_seteuid
	},		/* 141 = seteuid */
	{
		.sy_call = sys_nosys,
	},		/* 142 = filler */
	{
		.sy_call = (sy_call_t *)sys_fork
	},		/* 143 = fork1 */
	{
		.sy_call = sys_nosys,
	},		/* 144 = filler */
	{
		ns(struct svr4_sys__lwp_info_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys__lwp_info
	},		/* 145 = _lwp_info */
	{
		.sy_call = sys_nosys,
	},		/* 146 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 147 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 148 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 149 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 150 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 151 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 152 = filler */
	{
		ns(struct sys_fchroot_args),
		.sy_call = (sy_call_t *)sys_fchroot
	},		/* 153 = fchroot */
	{
		ns(struct svr4_sys_utimes_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_utimes
	},		/* 154 = utimes */
	{
		.sy_call = (sy_call_t *)svr4_sys_vhangup
	},		/* 155 = vhangup */
	{
		ns(struct svr4_sys_gettimeofday_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_gettimeofday
	},		/* 156 = gettimeofday */
	{
		ns(struct compat_50_sys_getitimer_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)compat_50_sys_getitimer
	},		/* 157 = getitimer */
	{
		ns(struct compat_50_sys_setitimer_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)compat_50_sys_setitimer
	},		/* 158 = setitimer */
	{
		ns(struct svr4_sys__lwp_create_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys__lwp_create
	},		/* 159 = _lwp_create */
	{
		.sy_call = (sy_call_t *)svr4_sys__lwp_exit
	},		/* 160 = _lwp_exit */
	{
		ns(struct svr4_sys__lwp_suspend_args),
		.sy_call = (sy_call_t *)svr4_sys__lwp_suspend
	},		/* 161 = _lwp_suspend */
	{
		ns(struct svr4_sys__lwp_continue_args),
		.sy_call = (sy_call_t *)svr4_sys__lwp_continue
	},		/* 162 = _lwp_continue */
	{
		ns(struct svr4_sys__lwp_kill_args),
		.sy_call = (sy_call_t *)svr4_sys__lwp_kill
	},		/* 163 = _lwp_kill */
	{
		.sy_call = (sy_call_t *)svr4_sys__lwp_self
	},		/* 164 = _lwp_self */
	{
		.sy_call = (sy_call_t *)svr4_sys__lwp_getprivate
	},		/* 165 = _lwp_getprivate */
	{
		ns(struct svr4_sys__lwp_setprivate_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys__lwp_setprivate
	},		/* 166 = _lwp_setprivate */
	{
		ns(struct svr4_sys__lwp_wait_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys__lwp_wait
	},		/* 167 = _lwp_wait */
	{
		.sy_call = sys_nosys,
	},		/* 168 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 169 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 170 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 171 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 172 = filler */
	{
		ns(struct svr4_sys_pread_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_pread
	},		/* 173 = pread */
	{
		ns(struct svr4_sys_pwrite_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_pwrite
	},		/* 174 = pwrite */
	{
		ns(struct svr4_sys_llseek_args),
		.sy_call = (sy_call_t *)svr4_sys_llseek
	},		/* 175 = llseek */
	{
		.sy_call = sys_nosys,
	},		/* 176 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 177 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 178 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 179 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 180 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 181 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 182 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 183 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 184 = filler */
	{
		ns(struct svr4_sys_acl_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_acl
	},		/* 185 = acl */
	{
		ns(struct svr4_sys_auditsys_args),
		.sy_call = (sy_call_t *)svr4_sys_auditsys
	},		/* 186 = auditsys */
	{
		.sy_call = sys_nosys,
	},		/* 187 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 188 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 189 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 190 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 191 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 192 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 193 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 194 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 195 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 196 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 197 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 198 = filler */
	{
		ns(struct compat_50_sys_nanosleep_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)compat_50_sys_nanosleep
	},		/* 199 = nanosleep */
	{
		ns(struct svr4_sys_facl_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_facl
	},		/* 200 = facl */
	{
		.sy_call = sys_nosys,
	},		/* 201 = filler */
	{
		ns(struct sys_setreuid_args),
		.sy_call = (sy_call_t *)sys_setreuid
	},		/* 202 = setreuid */
	{
		ns(struct sys_setregid_args),
		.sy_call = (sy_call_t *)sys_setregid
	},		/* 203 = setregid */
	{
		.sy_call = sys_nosys,
	},		/* 204 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 205 = filler */
	{
		ns(struct svr4_sys_schedctl_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_schedctl
	},		/* 206 = schedctl */
	{
		.sy_call = sys_nosys,
	},		/* 207 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 208 = filler */
	{
		ns(struct svr4_sys_resolvepath_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_resolvepath
	},		/* 209 = resolvepath */
	{
		.sy_call = sys_nosys,
	},		/* 210 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 211 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 212 = filler */
	{
		ns(struct svr4_sys_getdents64_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_getdents64
	},		/* 213 = getdents64 */
	{
		ns(struct svr4_sys_mmap64_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_mmap64
	},		/* 214 = mmap64 */
	{
		ns(struct svr4_sys_stat64_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_stat64
	},		/* 215 = stat64 */
	{
		ns(struct svr4_sys_lstat64_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_lstat64
	},		/* 216 = lstat64 */
	{
		ns(struct svr4_sys_fstat64_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_fstat64
	},		/* 217 = fstat64 */
	{
		ns(struct svr4_sys_statvfs64_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_statvfs64
	},		/* 218 = statvfs64 */
	{
		ns(struct svr4_sys_fstatvfs64_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_fstatvfs64
	},		/* 219 = fstatvfs64 */
	{
		ns(struct svr4_sys_setrlimit64_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_setrlimit64
	},		/* 220 = setrlimit64 */
	{
		ns(struct svr4_sys_getrlimit64_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_getrlimit64
	},		/* 221 = getrlimit64 */
	{
		ns(struct svr4_sys_pread64_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_pread64
	},		/* 222 = pread64 */
	{
		ns(struct svr4_sys_pwrite64_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_pwrite64
	},		/* 223 = pwrite64 */
	{
		ns(struct svr4_sys_creat64_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_creat64
	},		/* 224 = creat64 */
	{
		ns(struct svr4_sys_open64_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)svr4_sys_open64
	},		/* 225 = open64 */
	{
		.sy_call = sys_nosys,
	},		/* 226 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 227 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 228 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 229 = filler */
	{
		ns(struct svr4_sys_socket_args),
		.sy_call = (sy_call_t *)svr4_sys_socket
	},		/* 230 = socket */
	{
		ns(struct sys_socketpair_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_socketpair
	},		/* 231 = socketpair */
	{
		ns(struct sys_bind_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_bind
	},		/* 232 = bind */
	{
		ns(struct sys_listen_args),
		.sy_call = (sy_call_t *)sys_listen
	},		/* 233 = listen */
	{
		ns(struct compat_43_sys_accept_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)compat_43_sys_accept
	},		/* 234 = accept */
	{
		ns(struct sys_connect_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_connect
	},		/* 235 = connect */
	{
		ns(struct sys_shutdown_args),
		.sy_call = (sy_call_t *)sys_shutdown
	},		/* 236 = shutdown */
	{
		ns(struct compat_43_sys_recv_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)compat_43_sys_recv
	},		/* 237 = recv */
	{
		ns(struct compat_43_sys_recvfrom_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)compat_43_sys_recvfrom
	},		/* 238 = recvfrom */
	{
		ns(struct compat_43_sys_recvmsg_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)compat_43_sys_recvmsg
	},		/* 239 = recvmsg */
	{
		ns(struct compat_43_sys_send_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)compat_43_sys_send
	},		/* 240 = send */
	{
		ns(struct compat_43_sys_sendmsg_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)compat_43_sys_sendmsg
	},		/* 241 = sendmsg */
	{
		ns(struct sys_sendto_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_sendto
	},		/* 242 = sendto */
	{
		ns(struct compat_43_sys_getpeername_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)compat_43_sys_getpeername
	},		/* 243 = getpeername */
	{
		ns(struct compat_43_sys_getsockname_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)compat_43_sys_getsockname
	},		/* 244 = getsockname */
	{
		ns(struct sys_getsockopt_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_getsockopt
	},		/* 245 = getsockopt */
	{
		ns(struct sys_setsockopt_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_setsockopt
	},		/* 246 = setsockopt */
	{
		.sy_call = sys_nosys,
	},		/* 247 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 248 = filler */
#if defined(NTP) || !defined(_KERNEL)
	{
		ns(struct sys_ntp_adjtime_args),
		.sy_flags = SYCALL_ARG_PTR,
		.sy_call = (sy_call_t *)sys_ntp_adjtime
	},		/* 249 = ntp_adjtime */
#else
	{
		.sy_call = sys_nosys,
	},		/* 249 = filler */
#endif
	{
		.sy_call = sys_nosys,
	},		/* 250 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 251 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 252 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 253 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 254 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 255 = filler */
};

const uint32_t svr4_sysent_nomodbits[] = {
	0x00000000,	/* syscalls   0- 31 */
	0x00000000,	/* syscalls  32- 63 */
	0x00000000,	/* syscalls  64- 95 */
	0x00000000,	/* syscalls  96-127 */
	0x00000000,	/* syscalls 128-159 */
	0x00000000,	/* syscalls 160-191 */
	0x00000000,	/* syscalls 192-223 */
	0x00000000,	/* syscalls 224-255 */
};