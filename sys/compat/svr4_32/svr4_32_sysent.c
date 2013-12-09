/* $NetBSD: svr4_32_sysent.c,v 1.23 2013/11/07 19:39:58 njoly Exp $ */

/*
 * System call switch table.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	NetBSD: syscalls.master,v 1.20 2013/11/07 19:37:19 njoly Exp
 */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: svr4_32_sysent.c,v 1.23 2013/11/07 19:39:58 njoly Exp $");

#if defined(_KERNEL_OPT)
#include "opt_ntp.h"
#include "opt_sysv.h"
#endif
#include <sys/param.h>
#include <sys/systm.h>
#include <sys/signal.h>
#include <sys/mount.h>
#include <sys/poll.h>
#include <sys/syscallargs.h>
#include <compat/svr4_32/svr4_32_types.h>
#include <compat/netbsd32/netbsd32_syscallargs.h>
#include <compat/svr4_32/svr4_32_time.h>
#include <compat/svr4_32/svr4_32_signal.h>
#include <compat/svr4_32/svr4_32_ucontext.h>
#include <compat/svr4_32/svr4_32_lwp.h>
#include <compat/svr4_32/svr4_32_syscallargs.h>
#include <compat/svr4_32/svr4_32_statvfs.h>
#include <compat/svr4_32/svr4_32_resource.h>
#include <compat/svr4_32/svr4_32_acl.h>
#include <compat/svr4_32/svr4_32_schedctl.h>

#define	s(type)	sizeof(type)
#define	n(type)	(sizeof(type)/sizeof (register32_t))
#define	ns(type)	n(type), s(type)

struct sysent svr4_32_sysent[] = {
	{ 0, 0, 0,
	    (sy_call_t *)sys_nosys },		/* 0 = syscall */
	{ ns(struct netbsd32_exit_args), 0,
	    (sy_call_t *)netbsd32_exit },	/* 1 = netbsd32_exit */
	{ 0, 0, 0,
	    (sy_call_t *)sys_fork },		/* 2 = fork */
	{ ns(struct netbsd32_read_args), 0,
	    (sy_call_t *)netbsd32_read },	/* 3 = netbsd32_read */
	{ ns(struct netbsd32_write_args), 0,
	    (sy_call_t *)netbsd32_write },	/* 4 = netbsd32_write */
	{ ns(struct svr4_32_sys_open_args), 0,
	    (sy_call_t *)svr4_32_sys_open },	/* 5 = open */
	{ ns(struct netbsd32_close_args), 0,
	    (sy_call_t *)netbsd32_close },	/* 6 = netbsd32_close */
	{ ns(struct svr4_32_sys_wait_args), 0,
	    (sy_call_t *)svr4_32_sys_wait },	/* 7 = wait */
	{ ns(struct svr4_32_sys_creat_args), 0,
	    (sy_call_t *)svr4_32_sys_creat },	/* 8 = creat */
	{ ns(struct netbsd32_link_args), 0,
	    (sy_call_t *)netbsd32_link },	/* 9 = netbsd32_link */
	{ ns(struct netbsd32_unlink_args), 0,
	    (sy_call_t *)netbsd32_unlink },	/* 10 = netbsd32_unlink */
	{ ns(struct svr4_32_sys_execv_args), 0,
	    (sy_call_t *)svr4_32_sys_execv },	/* 11 = execv */
	{ ns(struct netbsd32_chdir_args), 0,
	    (sy_call_t *)netbsd32_chdir },	/* 12 = netbsd32_chdir */
	{ ns(struct svr4_32_sys_time_args), 0,
	    (sy_call_t *)svr4_32_sys_time },	/* 13 = time */
	{ ns(struct svr4_32_sys_mknod_args), 0,
	    (sy_call_t *)svr4_32_sys_mknod },	/* 14 = mknod */
	{ ns(struct netbsd32_chmod_args), 0,
	    (sy_call_t *)netbsd32_chmod },	/* 15 = netbsd32_chmod */
	{ ns(struct netbsd32___posix_chown_args), 0,
	    (sy_call_t *)netbsd32___posix_chown },/* 16 = chown */
	{ ns(struct svr4_32_sys_break_args), 0,
	    (sy_call_t *)svr4_32_sys_break },	/* 17 = break */
	{ ns(struct svr4_32_sys_stat_args), 0,
	    (sy_call_t *)svr4_32_sys_stat },	/* 18 = stat */
	{ ns(struct compat_43_netbsd32_olseek_args), 0,
	    (sy_call_t *)compat_43_netbsd32_olseek },/* 19 = compat_43_netbsd32_olseek */
	{ 0, 0, 0,
	    (sy_call_t *)sys_getpid },		/* 20 = getpid */
	{ 0, 0, 0,
	    sys_nosys },			/* 21 = unimplemented old_mount */
	{ 0, 0, 0,
	    sys_nosys },			/* 22 = unimplemented System V umount */
	{ ns(struct netbsd32_setuid_args), 0,
	    (sy_call_t *)netbsd32_setuid },	/* 23 = netbsd32_setuid */
	{ 0, 0, 0,
	    (sy_call_t *)sys_getuid_with_euid },/* 24 = getuid_with_euid */
	{ 0, 0, 0,
	    sys_nosys },			/* 25 = unimplemented stime */
	{ 0, 0, 0,
	    sys_nosys },			/* 26 = unimplemented pcsample */
	{ ns(struct svr4_32_sys_alarm_args), 0,
	    (sy_call_t *)svr4_32_sys_alarm },	/* 27 = alarm */
	{ ns(struct svr4_32_sys_fstat_args), 0,
	    (sy_call_t *)svr4_32_sys_fstat },	/* 28 = fstat */
	{ 0, 0, 0,
	    (sy_call_t *)svr4_32_sys_pause },	/* 29 = pause */
	{ ns(struct svr4_32_sys_utime_args), 0,
	    (sy_call_t *)svr4_32_sys_utime },	/* 30 = utime */
	{ 0, 0, 0,
	    sys_nosys },			/* 31 = unimplemented was stty */
	{ 0, 0, 0,
	    sys_nosys },			/* 32 = unimplemented was gtty */
	{ ns(struct svr4_32_sys_access_args), 0,
	    (sy_call_t *)svr4_32_sys_access },	/* 33 = access */
	{ ns(struct svr4_32_sys_nice_args), 0,
	    (sy_call_t *)svr4_32_sys_nice },	/* 34 = nice */
	{ 0, 0, 0,
	    sys_nosys },			/* 35 = unimplemented statfs */
	{ 0, 0, 0,
	    (sy_call_t *)sys_sync },		/* 36 = sync */
	{ ns(struct svr4_32_sys_kill_args), 0,
	    (sy_call_t *)svr4_32_sys_kill },	/* 37 = kill */
	{ 0, 0, 0,
	    sys_nosys },			/* 38 = unimplemented fstatfs */
	{ ns(struct svr4_32_sys_pgrpsys_args), 0,
	    (sy_call_t *)svr4_32_sys_pgrpsys },	/* 39 = pgrpsys */
	{ 0, 0, 0,
	    sys_nosys },			/* 40 = unimplemented xenix */
	{ ns(struct netbsd32_dup_args), 0,
	    (sy_call_t *)netbsd32_dup },	/* 41 = netbsd32_dup */
	{ 0, 0, 0,
	    (sy_call_t *)sys_pipe },		/* 42 = pipe */
	{ ns(struct svr4_32_sys_times_args), 0,
	    (sy_call_t *)svr4_32_sys_times },	/* 43 = times */
	{ 0, 0, 0,
	    sys_nosys },			/* 44 = unimplemented profil */
	{ 0, 0, 0,
	    sys_nosys },			/* 45 = unimplemented plock */
	{ ns(struct netbsd32_setgid_args), 0,
	    (sy_call_t *)netbsd32_setgid },	/* 46 = netbsd32_setgid */
	{ 0, 0, 0,
	    (sy_call_t *)sys_getgid_with_egid },/* 47 = getgid_with_egid */
	{ ns(struct svr4_32_sys_signal_args), 0,
	    (sy_call_t *)svr4_32_sys_signal },	/* 48 = signal */
#ifdef SYSVMSG
	{ ns(struct svr4_32_sys_msgsys_args), 0,
	    (sy_call_t *)svr4_32_sys_msgsys },	/* 49 = msgsys */
#else
	{ 0, 0, 0,
	    sys_nosys },			/* 49 = unimplemented msgsys */
#endif
	{ ns(struct svr4_32_sys_sysarch_args), 0,
	    (sy_call_t *)svr4_32_sys_sysarch },	/* 50 = sysarch */
	{ 0, 0, 0,
	    sys_nosys },			/* 51 = unimplemented acct */
#ifdef SYSVSHM
	{ ns(struct svr4_32_sys_shmsys_args), 0,
	    (sy_call_t *)svr4_32_sys_shmsys },	/* 52 = shmsys */
#else
	{ 0, 0, 0,
	    sys_nosys },			/* 52 = unimplemented shmsys */
#endif
#ifdef SYSVSEM
	{ ns(struct svr4_32_sys_semsys_args), 0,
	    (sy_call_t *)svr4_32_sys_semsys },	/* 53 = semsys */
#else
	{ 0, 0, 0,
	    sys_nosys },			/* 53 = unimplemented semsys */
#endif
	{ ns(struct svr4_32_sys_ioctl_args), 0,
	    (sy_call_t *)svr4_32_sys_ioctl },	/* 54 = ioctl */
	{ 0, 0, 0,
	    sys_nosys },			/* 55 = unimplemented uadmin */
	{ 0, 0, 0,
	    sys_nosys },			/* 56 = unimplemented exch */
	{ ns(struct svr4_32_sys_utssys_args), 0,
	    (sy_call_t *)svr4_32_sys_utssys },	/* 57 = utssys */
	{ ns(struct netbsd32_fsync_args), 0,
	    (sy_call_t *)netbsd32_fsync },	/* 58 = netbsd32_fsync */
	{ ns(struct netbsd32_execve_args), 0,
	    (sy_call_t *)netbsd32_execve },	/* 59 = netbsd32_execve */
	{ ns(struct netbsd32_umask_args), 0,
	    (sy_call_t *)netbsd32_umask },	/* 60 = netbsd32_umask */
	{ ns(struct netbsd32_chroot_args), 0,
	    (sy_call_t *)netbsd32_chroot },	/* 61 = netbsd32_chroot */
	{ ns(struct svr4_32_sys_fcntl_args), 0,
	    (sy_call_t *)svr4_32_sys_fcntl },	/* 62 = fcntl */
	{ ns(struct svr4_32_sys_ulimit_args), 0,
	    (sy_call_t *)svr4_32_sys_ulimit },	/* 63 = ulimit */
	{ 0, 0, 0,
	    sys_nosys },			/* 64 = unimplemented reserved for unix/pc */
	{ 0, 0, 0,
	    sys_nosys },			/* 65 = unimplemented reserved for unix/pc */
	{ 0, 0, 0,
	    sys_nosys },			/* 66 = unimplemented reserved for unix/pc */
	{ 0, 0, 0,
	    sys_nosys },			/* 67 = unimplemented reserved for unix/pc */
	{ 0, 0, 0,
	    sys_nosys },			/* 68 = unimplemented reserved for unix/pc */
	{ 0, 0, 0,
	    sys_nosys },			/* 69 = unimplemented reserved for unix/pc */
	{ 0, 0, 0,
	    sys_nosys },			/* 70 = obsolete advfs */
	{ 0, 0, 0,
	    sys_nosys },			/* 71 = obsolete unadvfs */
	{ 0, 0, 0,
	    sys_nosys },			/* 72 = obsolete rmount */
	{ 0, 0, 0,
	    sys_nosys },			/* 73 = obsolete rumount */
	{ 0, 0, 0,
	    sys_nosys },			/* 74 = obsolete rfstart */
	{ 0, 0, 0,
	    sys_nosys },			/* 75 = obsolete sigret */
	{ 0, 0, 0,
	    sys_nosys },			/* 76 = obsolete rdebug */
	{ 0, 0, 0,
	    sys_nosys },			/* 77 = obsolete rfstop */
	{ 0, 0, 0,
	    sys_nosys },			/* 78 = unimplemented rfsys */
	{ ns(struct netbsd32_rmdir_args), 0,
	    (sy_call_t *)netbsd32_rmdir },	/* 79 = netbsd32_rmdir */
	{ ns(struct netbsd32_mkdir_args), 0,
	    (sy_call_t *)netbsd32_mkdir },	/* 80 = netbsd32_mkdir */
	{ ns(struct svr4_32_sys_getdents_args), 0,
	    (sy_call_t *)svr4_32_sys_getdents },/* 81 = getdents */
	{ 0, 0, 0,
	    sys_nosys },			/* 82 = obsolete libattach */
	{ 0, 0, 0,
	    sys_nosys },			/* 83 = obsolete libdetach */
	{ 0, 0, 0,
	    sys_nosys },			/* 84 = unimplemented sysfs */
	{ ns(struct svr4_32_sys_getmsg_args), 0,
	    (sy_call_t *)svr4_32_sys_getmsg },	/* 85 = getmsg */
	{ ns(struct svr4_32_sys_putmsg_args), 0,
	    (sy_call_t *)svr4_32_sys_putmsg },	/* 86 = putmsg */
	{ ns(struct netbsd32_poll_args), 0,
	    (sy_call_t *)netbsd32_poll },	/* 87 = netbsd32_poll */
	{ ns(struct svr4_32_sys_lstat_args), 0,
	    (sy_call_t *)svr4_32_sys_lstat },	/* 88 = lstat */
	{ ns(struct netbsd32_symlink_args), 0,
	    (sy_call_t *)netbsd32_symlink },	/* 89 = netbsd32_symlink */
	{ ns(struct netbsd32_readlink_args), 0,
	    (sy_call_t *)netbsd32_readlink },	/* 90 = netbsd32_readlink */
	{ ns(struct netbsd32_getgroups_args), 0,
	    (sy_call_t *)netbsd32_getgroups },	/* 91 = netbsd32_getgroups */
	{ ns(struct netbsd32_setgroups_args), 0,
	    (sy_call_t *)netbsd32_setgroups },	/* 92 = netbsd32_setgroups */
	{ ns(struct netbsd32_fchmod_args), 0,
	    (sy_call_t *)netbsd32_fchmod },	/* 93 = netbsd32_fchmod */
	{ ns(struct netbsd32___posix_fchown_args), 0,
	    (sy_call_t *)netbsd32___posix_fchown },/* 94 = fchown */
	{ ns(struct svr4_32_sys_sigprocmask_args), 0,
	    (sy_call_t *)svr4_32_sys_sigprocmask },/* 95 = sigprocmask */
	{ ns(struct svr4_32_sys_sigsuspend_args), 0,
	    (sy_call_t *)svr4_32_sys_sigsuspend },/* 96 = sigsuspend */
	{ ns(struct svr4_32_sys_sigaltstack_args), 0,
	    (sy_call_t *)svr4_32_sys_sigaltstack },/* 97 = sigaltstack */
	{ ns(struct svr4_32_sys_sigaction_args), 0,
	    (sy_call_t *)svr4_32_sys_sigaction },/* 98 = sigaction */
	{ ns(struct svr4_32_sys_sigpending_args), 0,
	    (sy_call_t *)svr4_32_sys_sigpending },/* 99 = sigpending */
	{ ns(struct svr4_32_sys_context_args), 0,
	    (sy_call_t *)svr4_32_sys_context },	/* 100 = context */
	{ 0, 0, 0,
	    sys_nosys },			/* 101 = unimplemented evsys */
	{ 0, 0, 0,
	    sys_nosys },			/* 102 = unimplemented evtrapret */
	{ ns(struct svr4_32_sys_statvfs_args), 0,
	    (sy_call_t *)svr4_32_sys_statvfs },	/* 103 = statvfs */
	{ ns(struct svr4_32_sys_fstatvfs_args), 0,
	    (sy_call_t *)svr4_32_sys_fstatvfs },/* 104 = fstatvfs */
	{ 0, 0, 0,
	    sys_nosys },			/* 105 = unimplemented getloadavg */
	{ 0, 0, 0,
	    sys_nosys },			/* 106 = unimplemented nfssvc */
	{ ns(struct svr4_32_sys_waitsys_args), 0,
	    (sy_call_t *)svr4_32_sys_waitsys },	/* 107 = waitsys */
	{ 0, 0, 0,
	    sys_nosys },			/* 108 = unimplemented sigsendsys */
	{ ns(struct svr4_32_sys_hrtsys_args), 0,
	    (sy_call_t *)svr4_32_sys_hrtsys },	/* 109 = hrtsys */
	{ 0, 0, 0,
	    sys_nosys },			/* 110 = unimplemented acancel */
	{ 0, 0, 0,
	    sys_nosys },			/* 111 = unimplemented async */
	{ 0, 0, 0,
	    sys_nosys },			/* 112 = unimplemented priocntlsys */
	{ ns(struct svr4_32_sys_pathconf_args), 0,
	    (sy_call_t *)svr4_32_sys_pathconf },/* 113 = pathconf */
	{ 0, 0, 0,
	    sys_nosys },			/* 114 = unimplemented mincore */
	{ ns(struct svr4_32_sys_mmap_args), 0,
	    (sy_call_t *)svr4_32_sys_mmap },	/* 115 = mmap */
	{ ns(struct netbsd32_mprotect_args), 0,
	    (sy_call_t *)netbsd32_mprotect },	/* 116 = netbsd32_mprotect */
	{ ns(struct netbsd32_munmap_args), 0,
	    (sy_call_t *)netbsd32_munmap },	/* 117 = netbsd32_munmap */
	{ ns(struct svr4_32_sys_fpathconf_args), 0,
	    (sy_call_t *)svr4_32_sys_fpathconf },/* 118 = fpathconf */
	{ 0, 0, 0,
	    (sy_call_t *)sys_vfork },		/* 119 = vfork */
	{ ns(struct netbsd32_fchdir_args), 0,
	    (sy_call_t *)netbsd32_fchdir },	/* 120 = netbsd32_fchdir */
	{ ns(struct netbsd32_readv_args), 0,
	    (sy_call_t *)netbsd32_readv },	/* 121 = netbsd32_readv */
	{ ns(struct netbsd32_writev_args), 0,
	    (sy_call_t *)netbsd32_writev },	/* 122 = netbsd32_writev */
	{ ns(struct svr4_32_sys_xstat_args), 0,
	    (sy_call_t *)svr4_32_sys_xstat },	/* 123 = xstat */
	{ ns(struct svr4_32_sys_lxstat_args), 0,
	    (sy_call_t *)svr4_32_sys_lxstat },	/* 124 = lxstat */
	{ ns(struct svr4_32_sys_fxstat_args), 0,
	    (sy_call_t *)svr4_32_sys_fxstat },	/* 125 = fxstat */
	{ ns(struct svr4_32_sys_xmknod_args), 0,
	    (sy_call_t *)svr4_32_sys_xmknod },	/* 126 = xmknod */
	{ 0, 0, 0,
	    sys_nosys },			/* 127 = unimplemented clocal */
	{ ns(struct svr4_32_sys_setrlimit_args), 0,
	    (sy_call_t *)svr4_32_sys_setrlimit },/* 128 = setrlimit */
	{ ns(struct svr4_32_sys_getrlimit_args), 0,
	    (sy_call_t *)svr4_32_sys_getrlimit },/* 129 = getrlimit */
	{ ns(struct netbsd32_lchown_args), 0,
	    (sy_call_t *)netbsd32_lchown },	/* 130 = lchown */
	{ ns(struct svr4_32_sys_memcntl_args), 0,
	    (sy_call_t *)svr4_32_sys_memcntl },	/* 131 = memcntl */
	{ 0, 0, 0,
	    sys_nosys },			/* 132 = unimplemented getpmsg */
	{ 0, 0, 0,
	    sys_nosys },			/* 133 = unimplemented putpmsg */
	{ ns(struct netbsd32___posix_rename_args), 0,
	    (sy_call_t *)netbsd32___posix_rename },/* 134 = rename */
	{ ns(struct svr4_32_sys_uname_args), 0,
	    (sy_call_t *)svr4_32_sys_uname },	/* 135 = uname */
	{ ns(struct netbsd32_setegid_args), 0,
	    (sy_call_t *)netbsd32_setegid },	/* 136 = netbsd32_setegid */
	{ ns(struct svr4_32_sys_sysconfig_args), 0,
	    (sy_call_t *)svr4_32_sys_sysconfig },/* 137 = sysconfig */
	{ ns(struct compat_50_netbsd32_adjtime_args), 0,
	    (sy_call_t *)compat_50_netbsd32_adjtime },/* 138 = compat_50_netbsd32_adjtime */
	{ ns(struct svr4_32_sys_systeminfo_args), 0,
	    (sy_call_t *)svr4_32_sys_systeminfo },/* 139 = systeminfo */
	{ 0, 0, 0,
	    sys_nosys },			/* 140 = unimplemented */
	{ ns(struct netbsd32_seteuid_args), 0,
	    (sy_call_t *)netbsd32_seteuid },	/* 141 = netbsd32_seteuid */
	{ 0, 0, 0,
	    sys_nosys },			/* 142 = unimplemented vtrace */
	{ 0, 0, 0,
	    (sy_call_t *)sys_fork },		/* 143 = fork1 */
	{ 0, 0, 0,
	    sys_nosys },			/* 144 = unimplemented sigtimedwait */
	{ ns(struct svr4_32_sys__lwp_info_args), 0,
	    (sy_call_t *)svr4_32_sys__lwp_info },/* 145 = _lwp_info */
	{ 0, 0, 0,
	    sys_nosys },			/* 146 = unimplemented yield */
	{ 0, 0, 0,
	    sys_nosys },			/* 147 = unimplemented lwp_sema_wait */
	{ 0, 0, 0,
	    sys_nosys },			/* 148 = unimplemented lwp_sema_post */
	{ 0, 0, 0,
	    sys_nosys },			/* 149 = unimplemented lwp_sema_trywait */
	{ 0, 0, 0,
	    sys_nosys },			/* 150 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 151 = unimplemented corectl */
	{ 0, 0, 0,
	    sys_nosys },			/* 152 = unimplemented modctl */
	{ ns(struct netbsd32_fchroot_args), 0,
	    (sy_call_t *)netbsd32_fchroot },	/* 153 = netbsd32_fchroot */
	{ ns(struct svr4_32_sys_utimes_args), 0,
	    (sy_call_t *)svr4_32_sys_utimes },	/* 154 = utimes */
	{ 0, 0, 0,
	    (sy_call_t *)svr4_32_sys_vhangup },	/* 155 = vhangup */
	{ ns(struct svr4_32_sys_gettimeofday_args), 0,
	    (sy_call_t *)svr4_32_sys_gettimeofday },/* 156 = gettimeofday */
	{ ns(struct compat_50_netbsd32_getitimer_args), 0,
	    (sy_call_t *)compat_50_netbsd32_getitimer },/* 157 = compat_50_netbsd32_getitimer */
	{ ns(struct compat_50_netbsd32_setitimer_args), 0,
	    (sy_call_t *)compat_50_netbsd32_setitimer },/* 158 = compat_50_netbsd32_setitimer */
	{ ns(struct svr4_32_sys__lwp_create_args), 0,
	    (sy_call_t *)svr4_32_sys__lwp_create },/* 159 = _lwp_create */
	{ 0, 0, 0,
	    (sy_call_t *)svr4_32_sys__lwp_exit },/* 160 = _lwp_exit */
	{ ns(struct svr4_32_sys__lwp_suspend_args), 0,
	    (sy_call_t *)svr4_32_sys__lwp_suspend },/* 161 = _lwp_suspend */
	{ ns(struct svr4_32_sys__lwp_continue_args), 0,
	    (sy_call_t *)svr4_32_sys__lwp_continue },/* 162 = _lwp_continue */
	{ ns(struct svr4_32_sys__lwp_kill_args), 0,
	    (sy_call_t *)svr4_32_sys__lwp_kill },/* 163 = _lwp_kill */
	{ 0, 0, 0,
	    (sy_call_t *)svr4_sys__lwp_self },	/* 164 = _lwp_self */
	{ 0, 0, 0,
	    (sy_call_t *)svr4_32_sys__lwp_getprivate },/* 165 = _lwp_getprivate */
	{ ns(struct svr4_32_sys__lwp_setprivate_args), 0,
	    (sy_call_t *)svr4_32_sys__lwp_setprivate },/* 166 = _lwp_setprivate */
	{ ns(struct svr4_32_sys__lwp_wait_args), 0,
	    (sy_call_t *)svr4_32_sys__lwp_wait },/* 167 = _lwp_wait */
	{ 0, 0, 0,
	    sys_nosys },			/* 168 = unimplemented lwp_mutex_wakeup */
	{ 0, 0, 0,
	    sys_nosys },			/* 169 = unimplemented lwp_mutex_lock */
	{ 0, 0, 0,
	    sys_nosys },			/* 170 = unimplemented lwp_cond_wait */
	{ 0, 0, 0,
	    sys_nosys },			/* 171 = unimplemented lwp_cond_signal */
	{ 0, 0, 0,
	    sys_nosys },			/* 172 = unimplemented lwp_cond_broadcast */
	{ ns(struct svr4_32_sys_pread_args), 0,
	    (sy_call_t *)svr4_32_sys_pread },	/* 173 = pread */
	{ ns(struct svr4_32_sys_pwrite_args), 0,
	    (sy_call_t *)svr4_32_sys_pwrite },	/* 174 = pwrite */
	{ ns(struct svr4_32_sys_llseek_args), 0,
	    (sy_call_t *)svr4_32_sys_llseek },	/* 175 = llseek */
	{ 0, 0, 0,
	    sys_nosys },			/* 176 = unimplemented inst_sync */
	{ 0, 0, 0,
	    sys_nosys },			/* 177 = unimplemented srmlimitsys */
	{ 0, 0, 0,
	    sys_nosys },			/* 178 = unimplemented kaio */
	{ 0, 0, 0,
	    sys_nosys },			/* 179 = unimplemented cpc */
	{ 0, 0, 0,
	    sys_nosys },			/* 180 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 181 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 182 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 183 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 184 = unimplemented tsolsys */
	{ ns(struct svr4_32_sys_acl_args), 0,
	    (sy_call_t *)svr4_32_sys_acl },	/* 185 = acl */
	{ ns(struct svr4_32_sys_auditsys_args), 0,
	    (sy_call_t *)svr4_32_sys_auditsys },/* 186 = auditsys */
	{ 0, 0, 0,
	    sys_nosys },			/* 187 = unimplemented processor_bind */
	{ 0, 0, 0,
	    sys_nosys },			/* 188 = unimplemented processor_info */
	{ 0, 0, 0,
	    sys_nosys },			/* 189 = unimplemented p_online */
	{ 0, 0, 0,
	    sys_nosys },			/* 190 = unimplemented sigqueue */
	{ 0, 0, 0,
	    sys_nosys },			/* 191 = unimplemented clock_gettime */
	{ 0, 0, 0,
	    sys_nosys },			/* 192 = unimplemented clock_settime */
	{ 0, 0, 0,
	    sys_nosys },			/* 193 = unimplemented clock_getres */
	{ 0, 0, 0,
	    sys_nosys },			/* 194 = unimplemented timer_create */
	{ 0, 0, 0,
	    sys_nosys },			/* 195 = unimplemented timer_delete */
	{ 0, 0, 0,
	    sys_nosys },			/* 196 = unimplemented timer_settime */
	{ 0, 0, 0,
	    sys_nosys },			/* 197 = unimplemented timer_gettime */
	{ 0, 0, 0,
	    sys_nosys },			/* 198 = unimplemented timer_getoverrun */
	{ ns(struct compat_50_netbsd32_nanosleep_args), 0,
	    (sy_call_t *)compat_50_netbsd32_nanosleep },/* 199 = compat_50_netbsd32_nanosleep */
	{ ns(struct svr4_32_sys_facl_args), 0,
	    (sy_call_t *)svr4_32_sys_facl },	/* 200 = facl */
	{ 0, 0, 0,
	    sys_nosys },			/* 201 = unimplemented door */
	{ ns(struct netbsd32_setreuid_args), 0,
	    (sy_call_t *)netbsd32_setreuid },	/* 202 = netbsd32_setreuid */
	{ ns(struct netbsd32_setregid_args), 0,
	    (sy_call_t *)netbsd32_setregid },	/* 203 = netbsd32_setregid */
	{ 0, 0, 0,
	    sys_nosys },			/* 204 = unimplemented install_utrap */
	{ 0, 0, 0,
	    sys_nosys },			/* 205 = unimplemented signotify */
	{ ns(struct svr4_32_sys_schedctl_args), SYCALL_ARG_PTR,
	    (sy_call_t *)svr4_32_sys_schedctl },/* 206 = schedctl */
	{ 0, 0, 0,
	    sys_nosys },			/* 207 = unimplemented pset */
	{ 0, 0, 0,
	    sys_nosys },			/* 208 = unimplemented sparc_utrap_install */
	{ ns(struct svr4_32_sys_resolvepath_args), 0,
	    (sy_call_t *)svr4_32_sys_resolvepath },/* 209 = resolvepath */
	{ 0, 0, 0,
	    sys_nosys },			/* 210 = unimplemented signotifywait */
	{ 0, 0, 0,
	    sys_nosys },			/* 211 = unimplemented lwp_sigredirect */
	{ 0, 0, 0,
	    sys_nosys },			/* 212 = unimplemented lwp_alarm */
	{ ns(struct svr4_32_sys_getdents64_args), 0,
	    (sy_call_t *)svr4_32_sys_getdents64 },/* 213 = getdents64 */
	{ ns(struct svr4_32_sys_mmap64_args), 0,
	    (sy_call_t *)svr4_32_sys_mmap64 },	/* 214 = mmap64 */
	{ ns(struct svr4_32_sys_stat64_args), 0,
	    (sy_call_t *)svr4_32_sys_stat64 },	/* 215 = stat64 */
	{ ns(struct svr4_32_sys_lstat64_args), 0,
	    (sy_call_t *)svr4_32_sys_lstat64 },	/* 216 = lstat64 */
	{ ns(struct svr4_32_sys_fstat64_args), 0,
	    (sy_call_t *)svr4_32_sys_fstat64 },	/* 217 = fstat64 */
	{ ns(struct svr4_32_sys_statvfs64_args), 0,
	    (sy_call_t *)svr4_32_sys_statvfs64 },/* 218 = statvfs64 */
	{ ns(struct svr4_32_sys_fstatvfs64_args), 0,
	    (sy_call_t *)svr4_32_sys_fstatvfs64 },/* 219 = fstatvfs64 */
	{ ns(struct svr4_32_sys_setrlimit64_args), 0,
	    (sy_call_t *)svr4_32_sys_setrlimit64 },/* 220 = setrlimit64 */
	{ ns(struct svr4_32_sys_getrlimit64_args), 0,
	    (sy_call_t *)svr4_32_sys_getrlimit64 },/* 221 = getrlimit64 */
	{ ns(struct svr4_32_sys_pread64_args), 0,
	    (sy_call_t *)svr4_32_sys_pread64 },	/* 222 = pread64 */
	{ ns(struct svr4_32_sys_pwrite64_args), 0,
	    (sy_call_t *)svr4_32_sys_pwrite64 },/* 223 = pwrite64 */
#define svr4_32_sys_creat64 svr4_32_sys_creat
#define svr4_32_sys_creat64_args svr4_32_sys_creat_args
	{ ns(struct svr4_32_sys_creat64_args), 0,
	    (sy_call_t *)svr4_32_sys_creat64 },	/* 224 = creat64 */
#define svr4_32_sys_open64 svr4_32_sys_open
#define svr4_32_sys_open64_args svr4_32_sys_open_args
	{ ns(struct svr4_32_sys_open64_args), 0,
	    (sy_call_t *)svr4_32_sys_open64 },	/* 225 = open64 */
	{ 0, 0, 0,
	    sys_nosys },			/* 226 = unimplemented rpcsys */
	{ 0, 0, 0,
	    sys_nosys },			/* 227 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 228 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 229 = unimplemented */
	{ ns(struct svr4_32_sys_socket_args), 0,
	    (sy_call_t *)svr4_32_sys_socket },	/* 230 = socket */
	{ ns(struct netbsd32_socketpair_args), 0,
	    (sy_call_t *)netbsd32_socketpair },	/* 231 = netbsd32_socketpair */
	{ ns(struct netbsd32_bind_args), 0,
	    (sy_call_t *)netbsd32_bind },	/* 232 = netbsd32_bind */
	{ ns(struct netbsd32_listen_args), 0,
	    (sy_call_t *)netbsd32_listen },	/* 233 = netbsd32_listen */
	{ ns(struct compat_43_netbsd32_oaccept_args), 0,
	    (sy_call_t *)compat_43_netbsd32_oaccept },/* 234 = compat_43_netbsd32_oaccept */
	{ ns(struct netbsd32_connect_args), 0,
	    (sy_call_t *)netbsd32_connect },	/* 235 = netbsd32_connect */
	{ ns(struct netbsd32_shutdown_args), 0,
	    (sy_call_t *)netbsd32_shutdown },	/* 236 = netbsd32_shutdown */
	{ ns(struct compat_43_netbsd32_orecv_args), 0,
	    (sy_call_t *)compat_43_netbsd32_orecv },/* 237 = compat_43_netbsd32_orecv */
	{ ns(struct compat_43_netbsd32_orecvfrom_args), 0,
	    (sy_call_t *)compat_43_netbsd32_orecvfrom },/* 238 = compat_43_netbsd32_orecvfrom */
	{ ns(struct compat_43_netbsd32_orecvmsg_args), 0,
	    (sy_call_t *)compat_43_netbsd32_orecvmsg },/* 239 = compat_43_netbsd32_orecvmsg */
	{ ns(struct compat_43_netbsd32_osend_args), 0,
	    (sy_call_t *)compat_43_netbsd32_osend },/* 240 = compat_43_netbsd32_osend */
	{ ns(struct compat_43_netbsd32_osendmsg_args), 0,
	    (sy_call_t *)compat_43_netbsd32_osendmsg },/* 241 = compat_43_netbsd32_osendmsg */
	{ ns(struct netbsd32_sendto_args), 0,
	    (sy_call_t *)netbsd32_sendto },	/* 242 = netbsd32_sendto */
	{ ns(struct compat_43_netbsd32_ogetpeername_args), 0,
	    (sy_call_t *)compat_43_netbsd32_ogetpeername },/* 243 = compat_43_netbsd32_ogetpeername */
	{ ns(struct compat_43_netbsd32_ogetsockname_args), 0,
	    (sy_call_t *)compat_43_netbsd32_ogetsockname },/* 244 = compat_43_netbsd32_ogetsockname */
	{ ns(struct netbsd32_getsockopt_args), 0,
	    (sy_call_t *)netbsd32_getsockopt },	/* 245 = netbsd32_getsockopt */
	{ ns(struct netbsd32_setsockopt_args), 0,
	    (sy_call_t *)netbsd32_setsockopt },	/* 246 = netbsd32_setsockopt */
	{ 0, 0, 0,
	    sys_nosys },			/* 247 = unimplemented sockconfig */
	{ 0, 0, 0,
	    sys_nosys },			/* 248 = unimplemented netbsd32_ntp_gettime */
#if defined(NTP) || !defined(_KERNEL)
	{ ns(struct netbsd32_ntp_adjtime_args), 0,
	    (sy_call_t *)netbsd32_ntp_adjtime },/* 249 = netbsd32_ntp_adjtime */
#else
	{ 0, 0, 0,
	    sys_nosys },			/* 249 = excluded ntp_adjtime */
#endif
	{ 0, 0, 0,
	    sys_nosys },			/* 250 = unimplemented lwp_mutex_unlock */
	{ 0, 0, 0,
	    sys_nosys },			/* 251 = unimplemented lwp_mutex_trylock */
	{ 0, 0, 0,
	    sys_nosys },			/* 252 = unimplemented lwp_mutex_init */
	{ 0, 0, 0,
	    sys_nosys },			/* 253 = unimplemented cladm */
	{ 0, 0, 0,
	    sys_nosys },			/* 254 = unimplemented lwp_sigtimedwait */
	{ 0, 0, 0,
	    sys_nosys },			/* 255 = unimplemented umount2 */
};
