/* $NetBSD: aoutm68k_syscall.h,v 1.43 2014/01/25 16:43:03 christos Exp $ */

/*
 * System call numbers.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	NetBSD: syscalls.master,v 1.37 2011/03/07 19:26:35 bouyer Exp
 */

#ifndef _AOUTM68K_SYS_SYSCALL_H_
#define	_AOUTM68K_SYS_SYSCALL_H_

#define	AOUTM68K_SYS_MAXSYSARGS	8

/* syscall: "syscall" ret: "int" args: "int" "..." */
#define	AOUTM68K_SYS_syscall	0

/* syscall: "exit" ret: "void" args: "int" */
#define	AOUTM68K_SYS_exit	1

/* syscall: "fork" ret: "int" args: */
#define	AOUTM68K_SYS_fork	2

/* syscall: "read" ret: "ssize_t" args: "int" "void *" "size_t" */
#define	AOUTM68K_SYS_read	3

/* syscall: "write" ret: "ssize_t" args: "int" "const void *" "size_t" */
#define	AOUTM68K_SYS_write	4

/* syscall: "open" ret: "int" args: "const char *" "int" "..." */
#define	AOUTM68K_SYS_open	5

/* syscall: "close" ret: "int" args: "int" */
#define	AOUTM68K_SYS_close	6

/* syscall: "wait4" ret: "int" args: "int" "int *" "int" "struct rusage50 *" */
#define	AOUTM68K_SYS_wait4	7

#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "ocreat" ret: "int" args: "const char *" "mode_t" */
#define	AOUTM68K_SYS_ocreat	8

#else
				/* 8 is excluded compat_43_sys_creat */
#endif
/* syscall: "link" ret: "int" args: "const char *" "const char *" */
#define	AOUTM68K_SYS_link	9

/* syscall: "unlink" ret: "int" args: "const char *" */
#define	AOUTM68K_SYS_unlink	10

				/* 11 is obsolete execv */
/* syscall: "chdir" ret: "int" args: "const char *" */
#define	AOUTM68K_SYS_chdir	12

/* syscall: "fchdir" ret: "int" args: "int" */
#define	AOUTM68K_SYS_fchdir	13

/* syscall: "mknod" ret: "int" args: "const char *" "mode_t" "dev_t" */
#define	AOUTM68K_SYS_mknod	14

/* syscall: "chmod" ret: "int" args: "const char *" "mode_t" */
#define	AOUTM68K_SYS_chmod	15

/* syscall: "chown" ret: "int" args: "const char *" "uid_t" "gid_t" */
#define	AOUTM68K_SYS_chown	16

/* syscall: "break" ret: "int" args: "char *" */
#define	AOUTM68K_SYS_break	17

#if defined(COMPAT_20) || !defined(_KERNEL)
/* syscall: "getfsstat" ret: "int" args: "struct statfs12 *" "long" "int" */
#define	AOUTM68K_SYS_getfsstat	18

#else
				/* 18 is excluded compat_20_sys_getfsstat */
#endif
#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "olseek" ret: "long" args: "int" "long" "int" */
#define	AOUTM68K_SYS_olseek	19

#else
				/* 19 is excluded compat_43_sys_lseek */
#endif
/* syscall: "getpid" ret: "pid_t" args: */
#define	AOUTM68K_SYS_getpid	20

/* syscall: "mount" ret: "int" args: "const char *" "const char *" "int" "void *" */
#define	AOUTM68K_SYS_mount	21

/* syscall: "unmount" ret: "int" args: "const char *" "int" */
#define	AOUTM68K_SYS_unmount	22

/* syscall: "setuid" ret: "int" args: "uid_t" */
#define	AOUTM68K_SYS_setuid	23

/* syscall: "getuid" ret: "uid_t" args: */
#define	AOUTM68K_SYS_getuid	24

/* syscall: "geteuid" ret: "uid_t" args: */
#define	AOUTM68K_SYS_geteuid	25

/* syscall: "ptrace" ret: "int" args: "int" "pid_t" "void *" "int" */
#define	AOUTM68K_SYS_ptrace	26

/* syscall: "recvmsg" ret: "ssize_t" args: "int" "struct msghdr *" "int" */
#define	AOUTM68K_SYS_recvmsg	27

/* syscall: "sendmsg" ret: "ssize_t" args: "int" "const struct msghdr *" "int" */
#define	AOUTM68K_SYS_sendmsg	28

/* syscall: "recvfrom" ret: "ssize_t" args: "int" "void *" "size_t" "int" "struct sockaddr *" "unsigned int *" */
#define	AOUTM68K_SYS_recvfrom	29

/* syscall: "accept" ret: "int" args: "int" "struct sockaddr *" "unsigned int *" */
#define	AOUTM68K_SYS_accept	30

/* syscall: "getpeername" ret: "int" args: "int" "struct sockaddr *" "unsigned int *" */
#define	AOUTM68K_SYS_getpeername	31

/* syscall: "getsockname" ret: "int" args: "int" "struct sockaddr *" "unsigned int *" */
#define	AOUTM68K_SYS_getsockname	32

/* syscall: "access" ret: "int" args: "const char *" "int" */
#define	AOUTM68K_SYS_access	33

/* syscall: "chflags" ret: "int" args: "const char *" "u_long" */
#define	AOUTM68K_SYS_chflags	34

/* syscall: "fchflags" ret: "int" args: "int" "u_long" */
#define	AOUTM68K_SYS_fchflags	35

/* syscall: "sync" ret: "void" args: */
#define	AOUTM68K_SYS_sync	36

/* syscall: "kill" ret: "int" args: "int" "int" */
#define	AOUTM68K_SYS_kill	37

#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "stat43" ret: "int" args: "const char *" "struct aoutm68k_stat43 *" */
#define	AOUTM68K_SYS_stat43	38

#else
				/* 38 is excluded aoutm68k_compat_43_sys_stat */
#endif
/* syscall: "getppid" ret: "pid_t" args: */
#define	AOUTM68K_SYS_getppid	39

#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "lstat43" ret: "int" args: "const char *" "struct aoutm68k_stat43 *" */
#define	AOUTM68K_SYS_lstat43	40

#else
				/* 40 is excluded aoutm68k_compat_43_sys_lstat */
#endif
/* syscall: "dup" ret: "int" args: "int" */
#define	AOUTM68K_SYS_dup	41

/* syscall: "pipe" ret: "int" args: */
#define	AOUTM68K_SYS_pipe	42

/* syscall: "getegid" ret: "gid_t" args: */
#define	AOUTM68K_SYS_getegid	43

/* syscall: "profil" ret: "int" args: "void *" "size_t" "u_long" "u_int" */
#define	AOUTM68K_SYS_profil	44

#if defined(KTRACE) || !defined(_KERNEL)
/* syscall: "ktrace" ret: "int" args: "const char *" "int" "int" "int" */
#define	AOUTM68K_SYS_ktrace	45

#else
				/* 45 is excluded ktrace */
#endif
#if defined(COMPAT_13) || !defined(_KERNEL)
/* syscall: "sigaction13" ret: "int" args: "int" "const struct sigaction13 *" "struct sigaction13 *" */
#define	AOUTM68K_SYS_sigaction13	46

#else
				/* 46 is excluded compat_13_sys_sigaction */
#endif
/* syscall: "getgid" ret: "gid_t" args: */
#define	AOUTM68K_SYS_getgid	47

#if defined(COMPAT_13) || !defined(_KERNEL)
/* syscall: "sigprocmask13" ret: "int" args: "int" "int" */
#define	AOUTM68K_SYS_sigprocmask13	48

#else
				/* 48 is excluded compat_13_sys_sigprocmask */
#endif
/* syscall: "__getlogin" ret: "int" args: "char *" "size_t" */
#define	AOUTM68K_SYS___getlogin	49

/* syscall: "__setlogin" ret: "int" args: "const char *" */
#define	AOUTM68K_SYS___setlogin	50

/* syscall: "acct" ret: "int" args: "const char *" */
#define	AOUTM68K_SYS_acct	51

#if defined(COMPAT_13) || !defined(_KERNEL)
/* syscall: "sigpending13" ret: "int" args: */
#define	AOUTM68K_SYS_sigpending13	52

/* syscall: "sigaltstack13" ret: "int" args: "const struct sigaltstack13 *" "struct sigaltstack13 *" */
#define	AOUTM68K_SYS_sigaltstack13	53

#else
				/* 52 is excluded compat_13_sys_sigpending */
				/* 53 is excluded compat_13_sys_sigaltstack */
#endif
/* syscall: "ioctl" ret: "int" args: "int" "u_long" "..." */
#define	AOUTM68K_SYS_ioctl	54

#if defined(COMPAT_12) || !defined(_KERNEL)
/* syscall: "oreboot" ret: "int" args: "int" */
#define	AOUTM68K_SYS_oreboot	55

#else
				/* 55 is excluded compat_12_sys_reboot */
#endif
/* syscall: "revoke" ret: "int" args: "const char *" */
#define	AOUTM68K_SYS_revoke	56

/* syscall: "symlink" ret: "int" args: "const char *" "const char *" */
#define	AOUTM68K_SYS_symlink	57

/* syscall: "readlink" ret: "int" args: "const char *" "char *" "size_t" */
#define	AOUTM68K_SYS_readlink	58

/* syscall: "execve" ret: "int" args: "const char *" "char *const *" "char *const *" */
#define	AOUTM68K_SYS_execve	59

/* syscall: "umask" ret: "mode_t" args: "mode_t" */
#define	AOUTM68K_SYS_umask	60

/* syscall: "chroot" ret: "int" args: "const char *" */
#define	AOUTM68K_SYS_chroot	61

#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "fstat43" ret: "int" args: "int" "struct aoutm68k_stat43 *" */
#define	AOUTM68K_SYS_fstat43	62

/* syscall: "ogetkerninfo" ret: "int" args: "int" "char *" "int *" "int" */
#define	AOUTM68K_SYS_ogetkerninfo	63

/* syscall: "ogetpagesize" ret: "int" args: */
#define	AOUTM68K_SYS_ogetpagesize	64

#else
				/* 62 is excluded aoutm68k_compat_43_sys_fstat */
				/* 63 is excluded compat_43_sys_getkerninfo */
				/* 64 is excluded compat_43_sys_getpagesize */
#endif
#if defined(COMPAT_12) || !defined(_KERNEL)
/* syscall: "msync" ret: "int" args: "void *" "size_t" */
#define	AOUTM68K_SYS_msync	65

#else
				/* 65 is excluded compat_12_sys_msync */
#endif
/* syscall: "vfork" ret: "int" args: */
#define	AOUTM68K_SYS_vfork	66

				/* 67 is obsolete vread */
				/* 68 is obsolete vwrite */
/* syscall: "sbrk" ret: "int" args: "intptr_t" */
#define	AOUTM68K_SYS_sbrk	69

/* syscall: "sstk" ret: "int" args: "int" */
#define	AOUTM68K_SYS_sstk	70

#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "ommap" ret: "int" args: "void *" "size_t" "int" "int" "int" "long" */
#define	AOUTM68K_SYS_ommap	71

#else
				/* 71 is excluded compat_43_sys_mmap */
#endif
/* syscall: "vadvise" ret: "int" args: "int" */
#define	AOUTM68K_SYS_vadvise	72

/* syscall: "munmap" ret: "int" args: "void *" "size_t" */
#define	AOUTM68K_SYS_munmap	73

/* syscall: "mprotect" ret: "int" args: "void *" "size_t" "int" */
#define	AOUTM68K_SYS_mprotect	74

/* syscall: "madvise" ret: "int" args: "void *" "size_t" "int" */
#define	AOUTM68K_SYS_madvise	75

				/* 76 is obsolete vhangup */
				/* 77 is obsolete vlimit */
/* syscall: "mincore" ret: "int" args: "void *" "size_t" "char *" */
#define	AOUTM68K_SYS_mincore	78

/* syscall: "getgroups" ret: "int" args: "int" "gid_t *" */
#define	AOUTM68K_SYS_getgroups	79

/* syscall: "setgroups" ret: "int" args: "int" "const gid_t *" */
#define	AOUTM68K_SYS_setgroups	80

/* syscall: "getpgrp" ret: "int" args: */
#define	AOUTM68K_SYS_getpgrp	81

/* syscall: "setpgid" ret: "int" args: "int" "int" */
#define	AOUTM68K_SYS_setpgid	82

/* syscall: "setitimer" ret: "int" args: "int" "const struct itimerval50 *" "struct itimerval50 *" */
#define	AOUTM68K_SYS_setitimer	83

#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "owait" ret: "int" args: */
#define	AOUTM68K_SYS_owait	84

#else
				/* 84 is excluded compat_43_sys_wait */
#endif
#if defined(COMPAT_12) || !defined(_KERNEL)
/* syscall: "oswapon" ret: "int" args: "const char *" */
#define	AOUTM68K_SYS_oswapon	85

#else
				/* 85 is excluded compat_12_sys_swapon */
#endif
/* syscall: "getitimer" ret: "int" args: "int" "struct itimerval50 *" */
#define	AOUTM68K_SYS_getitimer	86

#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "ogethostname" ret: "int" args: "char *" "u_int" */
#define	AOUTM68K_SYS_ogethostname	87

/* syscall: "osethostname" ret: "int" args: "char *" "u_int" */
#define	AOUTM68K_SYS_osethostname	88

/* syscall: "ogetdtablesize" ret: "int" args: */
#define	AOUTM68K_SYS_ogetdtablesize	89

#else
				/* 87 is excluded compat_43_sys_gethostname */
				/* 88 is excluded compat_43_sys_sethostname */
				/* 89 is excluded compat_43_sys_getdtablesize */
#endif
/* syscall: "dup2" ret: "int" args: "int" "int" */
#define	AOUTM68K_SYS_dup2	90

/* syscall: "fcntl" ret: "int" args: "int" "int" "..." */
#define	AOUTM68K_SYS_fcntl	92

/* syscall: "select" ret: "int" args: "int" "fd_set *" "fd_set *" "fd_set *" "struct timeval50 *" */
#define	AOUTM68K_SYS_select	93

/* syscall: "fsync" ret: "int" args: "int" */
#define	AOUTM68K_SYS_fsync	95

/* syscall: "setpriority" ret: "int" args: "int" "int" "int" */
#define	AOUTM68K_SYS_setpriority	96

/* syscall: "socket" ret: "int" args: "int" "int" "int" */
#define	AOUTM68K_SYS_socket	97

/* syscall: "connect" ret: "int" args: "int" "const struct sockaddr *" "int" */
#define	AOUTM68K_SYS_connect	98

#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "oaccept" ret: "int" args: "int" "void *" "int *" */
#define	AOUTM68K_SYS_oaccept	99

#else
				/* 99 is excluded compat_43_sys_accept */
#endif
/* syscall: "getpriority" ret: "int" args: "int" "int" */
#define	AOUTM68K_SYS_getpriority	100

#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "osend" ret: "int" args: "int" "void *" "int" "int" */
#define	AOUTM68K_SYS_osend	101

/* syscall: "orecv" ret: "int" args: "int" "void *" "int" "int" */
#define	AOUTM68K_SYS_orecv	102

#else
				/* 101 is excluded compat_43_sys_send */
				/* 102 is excluded compat_43_sys_recv */
#endif
#if defined(COMPAT_13) || !defined(_KERNEL)
/* syscall: "sigreturn13" ret: "int" args: "struct sigcontext13 *" */
#define	AOUTM68K_SYS_sigreturn13	103

#else
				/* 103 is excluded compat_13_sys_sigreturn */
#endif
/* syscall: "bind" ret: "int" args: "int" "const struct sockaddr *" "int" */
#define	AOUTM68K_SYS_bind	104

/* syscall: "setsockopt" ret: "int" args: "int" "int" "int" "const void *" "int" */
#define	AOUTM68K_SYS_setsockopt	105

/* syscall: "listen" ret: "int" args: "int" "int" */
#define	AOUTM68K_SYS_listen	106

				/* 107 is obsolete vtimes */
#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "osigvec" ret: "int" args: "int" "struct sigvec *" "struct sigvec *" */
#define	AOUTM68K_SYS_osigvec	108

/* syscall: "osigblock" ret: "int" args: "int" */
#define	AOUTM68K_SYS_osigblock	109

/* syscall: "osigsetmask" ret: "int" args: "int" */
#define	AOUTM68K_SYS_osigsetmask	110

#else
				/* 108 is excluded compat_43_sys_sigvec */
				/* 109 is excluded compat_43_sys_sigblock */
				/* 110 is excluded compat_43_sys_sigsetmask */
#endif
#if defined(COMPAT_13) || !defined(_KERNEL)
/* syscall: "sigsuspend13" ret: "int" args: "int" */
#define	AOUTM68K_SYS_sigsuspend13	111

#else
				/* 111 is excluded compat_13_sys_sigsuspend */
#endif
#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "osigstack" ret: "int" args: "struct sigstack *" "struct sigstack *" */
#define	AOUTM68K_SYS_osigstack	112

/* syscall: "orecvmsg" ret: "int" args: "int" "struct omsghdr *" "int" */
#define	AOUTM68K_SYS_orecvmsg	113

/* syscall: "osendmsg" ret: "int" args: "int" "void *" "int" */
#define	AOUTM68K_SYS_osendmsg	114

#else
				/* 112 is excluded compat_43_sys_sigstack */
				/* 113 is excluded compat_43_sys_recvmesg */
				/* 114 is excluded compat_43_sys_sendmesg */
#endif
				/* 115 is obsolete vtrace */
/* syscall: "gettimeofday" ret: "int" args: "struct timeval50 *" "struct timezone *" */
#define	AOUTM68K_SYS_gettimeofday	116

/* syscall: "getrusage" ret: "int" args: "int" "struct rusage50 *" */
#define	AOUTM68K_SYS_getrusage	117

/* syscall: "getsockopt" ret: "int" args: "int" "int" "int" "void *" "int *" */
#define	AOUTM68K_SYS_getsockopt	118

				/* 119 is obsolete resuba */
/* syscall: "readv" ret: "ssize_t" args: "int" "const struct iovec *" "int" */
#define	AOUTM68K_SYS_readv	120

/* syscall: "writev" ret: "ssize_t" args: "int" "const struct iovec *" "int" */
#define	AOUTM68K_SYS_writev	121

/* syscall: "settimeofday" ret: "int" args: "const struct timeval50 *" "const struct timezone *" */
#define	AOUTM68K_SYS_settimeofday	122

/* syscall: "fchown" ret: "int" args: "int" "uid_t" "gid_t" */
#define	AOUTM68K_SYS_fchown	123

/* syscall: "fchmod" ret: "int" args: "int" "mode_t" */
#define	AOUTM68K_SYS_fchmod	124

#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "orecvfrom" ret: "int" args: "int" "void *" "size_t" "int" "void *" "int *" */
#define	AOUTM68K_SYS_orecvfrom	125

#else
				/* 125 is excluded compat_43_sys_recvfrom */
#endif
/* syscall: "setreuid" ret: "int" args: "uid_t" "uid_t" */
#define	AOUTM68K_SYS_setreuid	126

/* syscall: "setregid" ret: "int" args: "gid_t" "gid_t" */
#define	AOUTM68K_SYS_setregid	127

/* syscall: "rename" ret: "int" args: "const char *" "const char *" */
#define	AOUTM68K_SYS_rename	128

#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "otruncate" ret: "int" args: "const char *" "long" */
#define	AOUTM68K_SYS_otruncate	129

/* syscall: "oftruncate" ret: "int" args: "int" "long" */
#define	AOUTM68K_SYS_oftruncate	130

#else
				/* 129 is excluded compat_43_sys_truncate */
				/* 130 is excluded compat_43_sys_ftruncate */
#endif
/* syscall: "flock" ret: "int" args: "int" "int" */
#define	AOUTM68K_SYS_flock	131

/* syscall: "mkfifo" ret: "int" args: "const char *" "mode_t" */
#define	AOUTM68K_SYS_mkfifo	132

/* syscall: "sendto" ret: "ssize_t" args: "int" "const void *" "size_t" "int" "const struct sockaddr *" "int" */
#define	AOUTM68K_SYS_sendto	133

/* syscall: "shutdown" ret: "int" args: "int" "int" */
#define	AOUTM68K_SYS_shutdown	134

/* syscall: "socketpair" ret: "int" args: "int" "int" "int" "int *" */
#define	AOUTM68K_SYS_socketpair	135

/* syscall: "mkdir" ret: "int" args: "const char *" "mode_t" */
#define	AOUTM68K_SYS_mkdir	136

/* syscall: "rmdir" ret: "int" args: "const char *" */
#define	AOUTM68K_SYS_rmdir	137

/* syscall: "utimes" ret: "int" args: "const char *" "const struct timeval50 *" */
#define	AOUTM68K_SYS_utimes	138

				/* 139 is obsolete 4.2 sigreturn */
/* syscall: "adjtime" ret: "int" args: "const struct timeval50 *" "struct timeval50 *" */
#define	AOUTM68K_SYS_adjtime	140

#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "ogetpeername" ret: "int" args: "int" "void *" "int *" */
#define	AOUTM68K_SYS_ogetpeername	141

/* syscall: "ogethostid" ret: "int32_t" args: */
#define	AOUTM68K_SYS_ogethostid	142

/* syscall: "osethostid" ret: "int" args: "int32_t" */
#define	AOUTM68K_SYS_osethostid	143

/* syscall: "ogetrlimit" ret: "int" args: "int" "struct orlimit *" */
#define	AOUTM68K_SYS_ogetrlimit	144

/* syscall: "osetrlimit" ret: "int" args: "int" "const struct orlimit *" */
#define	AOUTM68K_SYS_osetrlimit	145

/* syscall: "okillpg" ret: "int" args: "int" "int" */
#define	AOUTM68K_SYS_okillpg	146

#else
				/* 141 is excluded compat_43_sys_getpeername */
				/* 142 is excluded compat_43_sys_gethostid */
				/* 143 is excluded compat_43_sys_sethostid */
				/* 144 is excluded compat_43_sys_getrlimit */
				/* 145 is excluded compat_43_sys_setrlimit */
				/* 146 is excluded compat_43_sys_killpg */
#endif
/* syscall: "setsid" ret: "int" args: */
#define	AOUTM68K_SYS_setsid	147

/* syscall: "quotactl" ret: "int" args: "const char *" "int" "int" "void *" */
#define	AOUTM68K_SYS_quotactl	148

#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "oquota" ret: "int" args: */
#define	AOUTM68K_SYS_oquota	149

/* syscall: "ogetsockname" ret: "int" args: "int" "void *" "int *" */
#define	AOUTM68K_SYS_ogetsockname	150

#else
				/* 149 is excluded compat_43_sys_quota */
				/* 150 is excluded compat_43_sys_getsockname */
#endif
				/* 155 is excluded nfssvc */
#if defined(COMPAT_43) || !defined(_KERNEL)
/* syscall: "ogetdirentries" ret: "int" args: "int" "char *" "u_int" "long *" */
#define	AOUTM68K_SYS_ogetdirentries	156

#else
				/* 156 is excluded compat_43_sys_getdirentries */
#endif
#if defined(COMPAT_20) || !defined(_KERNEL)
/* syscall: "statfs" ret: "int" args: "const char *" "struct statfs12 *" */
#define	AOUTM68K_SYS_statfs	157

#else
				/* 157 is excluded compat_20_sys_statfs */
#endif
#if defined(COMPAT_20) || !defined(_KERNEL)
/* syscall: "fstatfs" ret: "int" args: "int" "struct statfs12 *" */
#define	AOUTM68K_SYS_fstatfs	158

#else
				/* 158 is excluded compat_20_sys_statfs */
#endif
/* syscall: "getfh" ret: "int" args: "const char *" "struct compat_30_fhandle *" */
#define	AOUTM68K_SYS_getfh	161

#if defined(COMPAT_09) || !defined(_KERNEL)
/* syscall: "ogetdomainname" ret: "int" args: "char *" "int" */
#define	AOUTM68K_SYS_ogetdomainname	162

/* syscall: "osetdomainname" ret: "int" args: "char *" "int" */
#define	AOUTM68K_SYS_osetdomainname	163

/* syscall: "ouname" ret: "int" args: "struct outsname *" */
#define	AOUTM68K_SYS_ouname	164

#else
				/* 162 is excluded compat_09_sys_getdomainname */
				/* 163 is excluded compat_09_sys_setdomainname */
				/* 164 is excluded compat_09_sys_uname */
#endif
/* syscall: "sysarch" ret: "int" args: "int" "void *" */
#define	AOUTM68K_SYS_sysarch	165

#if (defined(SYSVSEM) || !defined(_KERNEL)) && !defined(_LP64) && defined(COMPAT_10)
/* syscall: "osemsys" ret: "int" args: "int" "int" "int" "int" "int" */
#define	AOUTM68K_SYS_osemsys	169

#else
				/* 169 is excluded 1.0 semsys */
#endif
#if (defined(SYSVMSG) || !defined(_KERNEL)) && !defined(_LP64) && defined(COMPAT_10)
/* syscall: "omsgsys" ret: "int" args: "int" "int" "int" "int" "int" "int" */
#define	AOUTM68K_SYS_omsgsys	170

#else
				/* 170 is excluded 1.0 msgsys */
#endif
#if (defined(SYSVSHM) || !defined(_KERNEL)) && !defined(_LP64) && defined(COMPAT_10)
/* syscall: "oshmsys" ret: "int" args: "int" "int" "int" "int" */
#define	AOUTM68K_SYS_oshmsys	171

#else
				/* 171 is excluded 1.0 shmsys */
#endif
/* syscall: "pread" ret: "ssize_t" args: "int" "void *" "size_t" "int" "off_t" */
#define	AOUTM68K_SYS_pread	173

/* syscall: "pwrite" ret: "ssize_t" args: "int" "const void *" "size_t" "int" "off_t" */
#define	AOUTM68K_SYS_pwrite	174

#if defined(NTP) || !defined(_KERNEL)
/* syscall: "ntp_adjtime" ret: "int" args: "struct timex *" */
#define	AOUTM68K_SYS_ntp_adjtime	176

#else
				/* 176 is excluded ntp_adjtime */
#endif
/* syscall: "setgid" ret: "int" args: "gid_t" */
#define	AOUTM68K_SYS_setgid	181

/* syscall: "setegid" ret: "int" args: "gid_t" */
#define	AOUTM68K_SYS_setegid	182

/* syscall: "seteuid" ret: "int" args: "uid_t" */
#define	AOUTM68K_SYS_seteuid	183

				/* 184 is excluded lfs_bmapv */
				/* 185 is excluded lfs_markv */
				/* 186 is excluded lfs_segclean */
				/* 187 is excluded lfs_segwait */
#if defined(COMPAT_12) || !defined(_KERNEL)
/* syscall: "stat12" ret: "int" args: "const char *" "struct aoutm68k_stat12 *" */
#define	AOUTM68K_SYS_stat12	188

/* syscall: "fstat12" ret: "int" args: "int" "struct aoutm68k_stat12 *" */
#define	AOUTM68K_SYS_fstat12	189

/* syscall: "lstat12" ret: "int" args: "const char *" "struct aoutm68k_stat12 *" */
#define	AOUTM68K_SYS_lstat12	190

#else
				/* 188 is excluded aoutm68k_compat_12_sys_stat */
				/* 189 is excluded aoutm68k_compat_12_sys_fstat */
				/* 190 is excluded aoutm68k_compat_12_sys_lstat */
#endif
/* syscall: "pathconf" ret: "long" args: "const char *" "int" */
#define	AOUTM68K_SYS_pathconf	191

/* syscall: "fpathconf" ret: "long" args: "int" "int" */
#define	AOUTM68K_SYS_fpathconf	192

/* syscall: "getrlimit" ret: "int" args: "int" "struct rlimit *" */
#define	AOUTM68K_SYS_getrlimit	194

/* syscall: "setrlimit" ret: "int" args: "int" "const struct rlimit *" */
#define	AOUTM68K_SYS_setrlimit	195

#if defined(COMPAT_12) || !defined(_KERNEL)
/* syscall: "getdirentries" ret: "int" args: "int" "char *" "u_int" "long *" */
#define	AOUTM68K_SYS_getdirentries	196

#else
				/* 196 is excluded compat_12_sys_getdirentries */
#endif
/* syscall: "mmap" ret: "void *" args: "void *" "size_t" "int" "int" "int" "long" "off_t" */
#define	AOUTM68K_SYS_mmap	197

/* syscall: "__syscall" ret: "quad_t" args: "quad_t" "..." */
#define	AOUTM68K_SYS___syscall	198

/* syscall: "lseek" ret: "off_t" args: "int" "int" "off_t" "int" */
#define	AOUTM68K_SYS_lseek	199

/* syscall: "truncate" ret: "int" args: "const char *" "int" "off_t" */
#define	AOUTM68K_SYS_truncate	200

/* syscall: "ftruncate" ret: "int" args: "int" "int" "off_t" */
#define	AOUTM68K_SYS_ftruncate	201

/* syscall: "__sysctl" ret: "int" args: "int *" "u_int" "void *" "size_t *" "void *" "size_t" */
#define	AOUTM68K_SYS___sysctl	202

/* syscall: "mlock" ret: "int" args: "const void *" "size_t" */
#define	AOUTM68K_SYS_mlock	203

/* syscall: "munlock" ret: "int" args: "const void *" "size_t" */
#define	AOUTM68K_SYS_munlock	204

/* syscall: "undelete" ret: "int" args: "const char *" */
#define	AOUTM68K_SYS_undelete	205

/* syscall: "futimes" ret: "int" args: "int" "const struct timeval50 *" */
#define	AOUTM68K_SYS_futimes	206

/* syscall: "getpgid" ret: "pid_t" args: "pid_t" */
#define	AOUTM68K_SYS_getpgid	207

/* syscall: "reboot" ret: "int" args: "int" "char *" */
#define	AOUTM68K_SYS_reboot	208

/* syscall: "poll" ret: "int" args: "struct pollfd *" "u_int" "int" */
#define	AOUTM68K_SYS_poll	209

#if defined(SYSVSEM) || !defined(_KERNEL)
#if defined(COMPAT_14) || !defined(_KERNEL)
/* syscall: "__semctl" ret: "int" args: "int" "int" "int" "union __semun *" */
#define	AOUTM68K_SYS___semctl	220

#else
				/* 220 is excluded compat_14_semctl */
#endif
/* syscall: "semget" ret: "int" args: "key_t" "int" "int" */
#define	AOUTM68K_SYS_semget	221

/* syscall: "semop" ret: "int" args: "int" "struct sembuf *" "size_t" */
#define	AOUTM68K_SYS_semop	222

/* syscall: "semconfig" ret: "int" args: "int" */
#define	AOUTM68K_SYS_semconfig	223

#else
				/* 220 is excluded compat_14_semctl */
				/* 221 is excluded semget */
				/* 222 is excluded semop */
				/* 223 is excluded semconfig */
#endif
#if defined(SYSVMSG) || !defined(_KERNEL)
#if defined(COMPAT_14) || !defined(_KERNEL)
/* syscall: "msgctl" ret: "int" args: "int" "int" "struct msqid_ds14 *" */
#define	AOUTM68K_SYS_msgctl	224

#else
				/* 224 is excluded compat_14_sys_msgctl */
#endif
/* syscall: "msgget" ret: "int" args: "key_t" "int" */
#define	AOUTM68K_SYS_msgget	225

/* syscall: "msgsnd" ret: "int" args: "int" "const void *" "size_t" "int" */
#define	AOUTM68K_SYS_msgsnd	226

/* syscall: "msgrcv" ret: "ssize_t" args: "int" "void *" "size_t" "long" "int" */
#define	AOUTM68K_SYS_msgrcv	227

#else
				/* 224 is excluded compat_14_msgctl */
				/* 225 is excluded msgget */
				/* 226 is excluded msgsnd */
				/* 227 is excluded msgrcv */
#endif
#if defined(SYSVSHM) || !defined(_KERNEL)
/* syscall: "shmat" ret: "void *" args: "int" "const void *" "int" */
#define	AOUTM68K_SYS_shmat	228

#if defined(COMPAT_14) || !defined(_KERNEL)
/* syscall: "shmctl" ret: "int" args: "int" "int" "struct shmid_ds14 *" */
#define	AOUTM68K_SYS_shmctl	229

#else
				/* 229 is excluded compat_14_sys_shmctl */
#endif
/* syscall: "shmdt" ret: "int" args: "const void *" */
#define	AOUTM68K_SYS_shmdt	230

/* syscall: "shmget" ret: "int" args: "key_t" "size_t" "int" */
#define	AOUTM68K_SYS_shmget	231

#else
				/* 228 is excluded shmat */
				/* 229 is excluded compat_14_shmctl */
				/* 230 is excluded shmdt */
				/* 231 is excluded shmget */
#endif
/* syscall: "clock_gettime" ret: "int" args: "clockid_t" "struct timespec50 *" */
#define	AOUTM68K_SYS_clock_gettime	232

/* syscall: "clock_settime" ret: "int" args: "clockid_t" "const struct timespec50 *" */
#define	AOUTM68K_SYS_clock_settime	233

/* syscall: "clock_getres" ret: "int" args: "clockid_t" "struct timespec50 *" */
#define	AOUTM68K_SYS_clock_getres	234

/* syscall: "nanosleep" ret: "int" args: "const struct timespec50 *" "struct timespec50 *" */
#define	AOUTM68K_SYS_nanosleep	240

/* syscall: "fdatasync" ret: "int" args: "int" */
#define	AOUTM68K_SYS_fdatasync	241

/* syscall: "mlockall" ret: "int" args: "int" */
#define	AOUTM68K_SYS_mlockall	242

/* syscall: "munlockall" ret: "int" args: */
#define	AOUTM68K_SYS_munlockall	243

/* syscall: "__posix_rename" ret: "int" args: "const char *" "const char *" */
#define	AOUTM68K_SYS___posix_rename	270

/* syscall: "swapctl" ret: "int" args: "int" "const void *" "int" */
#define	AOUTM68K_SYS_swapctl	271

#if defined(COMPAT_30) || !defined(_KERNEL)
/* syscall: "getdents" ret: "int" args: "int" "char *" "size_t" */
#define	AOUTM68K_SYS_getdents	272

#else
				/* 272 is excluded compat_30_sys_getdents */
#endif
/* syscall: "minherit" ret: "int" args: "void *" "size_t" "int" */
#define	AOUTM68K_SYS_minherit	273

/* syscall: "lchmod" ret: "int" args: "const char *" "mode_t" */
#define	AOUTM68K_SYS_lchmod	274

/* syscall: "lchown" ret: "int" args: "const char *" "uid_t" "gid_t" */
#define	AOUTM68K_SYS_lchown	275

/* syscall: "lutimes" ret: "int" args: "const char *" "const struct timeval50 *" */
#define	AOUTM68K_SYS_lutimes	276

/* syscall: "__msync13" ret: "int" args: "void *" "size_t" "int" */
#define	AOUTM68K_SYS___msync13	277

/* syscall: "__stat13" ret: "int" args: "const char *" "struct aoutm68k_stat *" */
#define	AOUTM68K_SYS___stat13	278

/* syscall: "__fstat13" ret: "int" args: "int" "struct aoutm68k_stat *" */
#define	AOUTM68K_SYS___fstat13	279

/* syscall: "__lstat13" ret: "int" args: "const char *" "struct aoutm68k_stat *" */
#define	AOUTM68K_SYS___lstat13	280

/* syscall: "__sigaltstack14" ret: "int" args: "const struct sigaltstack *" "struct sigaltstack *" */
#define	AOUTM68K_SYS___sigaltstack14	281

/* syscall: "__vfork14" ret: "int" args: */
#define	AOUTM68K_SYS___vfork14	282

/* syscall: "__posix_chown" ret: "int" args: "const char *" "uid_t" "gid_t" */
#define	AOUTM68K_SYS___posix_chown	283

/* syscall: "__posix_fchown" ret: "int" args: "int" "uid_t" "gid_t" */
#define	AOUTM68K_SYS___posix_fchown	284

/* syscall: "__posix_lchown" ret: "int" args: "const char *" "uid_t" "gid_t" */
#define	AOUTM68K_SYS___posix_lchown	285

/* syscall: "getsid" ret: "pid_t" args: "pid_t" */
#define	AOUTM68K_SYS_getsid	286

#if defined(KTRACE) || !defined(_KERNEL)
/* syscall: "fktrace" ret: "int" args: "const int" "int" "int" "int" */
#define	AOUTM68K_SYS_fktrace	288

#else
				/* 288 is excluded ktrace */
#endif
/* syscall: "preadv" ret: "ssize_t" args: "int" "const struct iovec *" "int" "int" "off_t" */
#define	AOUTM68K_SYS_preadv	289

/* syscall: "pwritev" ret: "ssize_t" args: "int" "const struct iovec *" "int" "int" "off_t" */
#define	AOUTM68K_SYS_pwritev	290

#if defined(COMPAT_16) || !defined(_KERNEL)
/* syscall: "__sigaction14" ret: "int" args: "int" "const struct sigaction *" "struct sigaction *" */
#define	AOUTM68K_SYS___sigaction14	291

#else
				/* 291 is excluded compat_16_sys___sigaction14 */
#endif
/* syscall: "__sigpending14" ret: "int" args: "sigset_t *" */
#define	AOUTM68K_SYS___sigpending14	292

/* syscall: "__sigprocmask14" ret: "int" args: "int" "const sigset_t *" "sigset_t *" */
#define	AOUTM68K_SYS___sigprocmask14	293

/* syscall: "__sigsuspend14" ret: "int" args: "const sigset_t *" */
#define	AOUTM68K_SYS___sigsuspend14	294

#if defined(COMPAT_16) || !defined(_KERNEL)
/* syscall: "__sigreturn14" ret: "int" args: "struct sigcontext *" */
#define	AOUTM68K_SYS___sigreturn14	295

#else
				/* 295 is excluded compat_16_sys___sigreturn14 */
#endif
/* syscall: "__getcwd" ret: "int" args: "char *" "size_t" */
#define	AOUTM68K_SYS___getcwd	296

/* syscall: "fchroot" ret: "int" args: "int" */
#define	AOUTM68K_SYS_fchroot	297

/* syscall: "fhopen" ret: "int" args: "const struct compat_30_fhandle *" "int" */
#define	AOUTM68K_SYS_fhopen	298

/* syscall: "fhstat" ret: "int" args: "const struct compat_30_fhandle *" "struct aoutm68k_stat *" */
#define	AOUTM68K_SYS_fhstat	299

#if defined(COMPAT_20) || !defined(_KERNEL)
/* syscall: "fhstatfs" ret: "int" args: "const struct compat_30-fhandle *" "struct statfs12 *" */
#define	AOUTM68K_SYS_fhstatfs	300

#else
				/* 300 is excluded compat_20_sys_fhstatfs */
#endif
#if defined(SYSVSEM) || !defined(_KERNEL)
/* syscall: "____semctl13" ret: "int" args: "int" "int" "int" "..." */
#define	AOUTM68K_SYS_____semctl13	301

#else
				/* 301 is excluded ____semctl13 */
#endif
#if defined(SYSVMSG) || !defined(_KERNEL)
/* syscall: "__msgctl13" ret: "int" args: "int" "int" "struct msqid_ds *" */
#define	AOUTM68K_SYS___msgctl13	302

#else
				/* 302 is excluded __msgctl13 */
#endif
#if defined(SYSVSHM) || !defined(_KERNEL)
/* syscall: "__shmctl13" ret: "int" args: "int" "int" "struct shmid_ds *" */
#define	AOUTM68K_SYS___shmctl13	303

#else
				/* 303 is excluded __shmctl13 */
#endif
/* syscall: "lchflags" ret: "int" args: "const char *" "u_long" */
#define	AOUTM68K_SYS_lchflags	304

/* syscall: "issetugid" ret: "int" args: */
#define	AOUTM68K_SYS_issetugid	305

/* syscall: "getcontext" ret: "int" args: "struct __ucontext *" */
#define	AOUTM68K_SYS_getcontext	306

/* syscall: "setcontext" ret: "int" args: "const struct __ucontext *" */
#define	AOUTM68K_SYS_setcontext	307

#define	AOUTM68K_SYS_MAXSYSCALL	308
#define	AOUTM68K_SYS_NSYSENT	512
#endif /* _AOUTM68K_SYS_SYSCALL_H_ */
