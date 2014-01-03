/* $NetBSD: rump_linux_syscallargs.h,v 1.11 2013/12/14 17:35:11 njoly Exp $ */

/*
 * System call argument lists.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	NetBSD: syscalls.master,v 1.10 2013/12/14 17:34:47 njoly Exp
 */

#ifndef _RUMP_LINUX_SYS_SYSCALLARGS_H_
#define	_RUMP_LINUX_SYS_SYSCALLARGS_H_

#define	RUMP_LINUX_SYS_MAXSYSARGS	8

#undef	syscallarg
#define	syscallarg(x)							\
	union {								\
		register_t pad;						\
		struct { x datum; } le;					\
		struct { /* LINTED zero array dimension */		\
			int8_t pad[  /* CONSTCOND */			\
				(sizeof (register_t) < sizeof (x))	\
				? 0					\
				: sizeof (register_t) - sizeof (x)];	\
			x datum;					\
		} be;							\
	}

#undef check_syscall_args
#define check_syscall_args(call) /*LINTED*/ \
	typedef char call##_check_args[sizeof (struct call##_args) \
		<= RUMP_LINUX_SYS_MAXSYSARGS * sizeof (register_t) ? 1 : -1];

struct sys_read_args;

struct sys_write_args;

struct linux_sys_open_args {
	syscallarg(const char *) path;
	syscallarg(int) flags;
	syscallarg(int) mode;
};
check_syscall_args(linux_sys_open)

struct sys_close_args;

struct sys_link_args;

struct linux_sys_unlink_args {
	syscallarg(const char *) path;
};
check_syscall_args(linux_sys_unlink)

struct sys_chdir_args;

struct sys_fchdir_args;

struct sys_chmod_args;

struct sys___posix_chown_args;

struct sys_setuid_args;

struct linux_sys_recvmsg_args {
	syscallarg(int) s;
	syscallarg(struct linux_msghdr *) msg;
	syscallarg(int) flags;
};
check_syscall_args(linux_sys_recvmsg)

struct linux_sys_sendmsg_args {
	syscallarg(int) s;
	syscallarg(const struct linux_msghdr *) msg;
	syscallarg(int) flags;
};
check_syscall_args(linux_sys_sendmsg)

struct linux_sys_recvfrom_args {
	syscallarg(int) s;
	syscallarg(void *) buf;
	syscallarg(int) len;
	syscallarg(int) flags;
	syscallarg(struct osockaddr *) from;
	syscallarg(int *) fromlenaddr;
};
check_syscall_args(linux_sys_recvfrom)

struct linux_sys_accept_args {
	syscallarg(int) s;
	syscallarg(struct osockaddr *) name;
	syscallarg(int *) anamelen;
};
check_syscall_args(linux_sys_accept)

struct linux_sys_getpeername_args {
	syscallarg(int) fdes;
	syscallarg(struct osockaddr *) asa;
	syscallarg(int *) alen;
};
check_syscall_args(linux_sys_getpeername)

struct linux_sys_getsockname_args {
	syscallarg(int) fdes;
	syscallarg(struct osockaddr *) asa;
	syscallarg(int *) alen;
};
check_syscall_args(linux_sys_getsockname)

struct sys_access_args;

struct sys_dup_args;

struct linux_sys_ioctl_args {
	syscallarg(int) fd;
	syscallarg(u_long) com;
	syscallarg(void *) data;
};
check_syscall_args(linux_sys_ioctl)

struct sys_symlink_args;

struct sys_readlink_args;

struct sys_umask_args;

struct sys_chroot_args;

struct sys_getgroups_args;

struct sys_setgroups_args;

struct sys_setpgid_args;

struct sys_dup2_args;

struct linux_sys_fcntl_args {
	syscallarg(int) fd;
	syscallarg(int) cmd;
	syscallarg(void *) arg;
};
check_syscall_args(linux_sys_fcntl)

struct sys_fsync_args;

struct linux_sys_connect_args {
	syscallarg(int) s;
	syscallarg(const struct osockaddr *) name;
	syscallarg(unsigned int) namelen;
};
check_syscall_args(linux_sys_connect)

struct linux_sys_bind_args {
	syscallarg(int) s;
	syscallarg(const struct osockaddr *) name;
	syscallarg(unsigned) namelen;
};
check_syscall_args(linux_sys_bind)

struct linux_sys_setsockopt_args {
	syscallarg(int) s;
	syscallarg(int) level;
	syscallarg(int) name;
	syscallarg(const void *) val;
	syscallarg(int) optlen;
};
check_syscall_args(linux_sys_setsockopt)

struct sys_listen_args;

struct linux_sys_getsockopt_args {
	syscallarg(int) s;
	syscallarg(int) level;
	syscallarg(int) name;
	syscallarg(void *) val;
	syscallarg(int *) avalsize;
};
check_syscall_args(linux_sys_getsockopt)

struct sys_readv_args;

struct sys_writev_args;

struct sys___posix_fchown_args;

struct sys_fchmod_args;

struct sys_setreuid_args;

struct sys_setregid_args;

struct sys___posix_rename_args;

struct sys_flock_args;

struct linux_sys_sendto_args {
	syscallarg(int) s;
	syscallarg(void *) buf;
	syscallarg(int) len;
	syscallarg(int) flags;
	syscallarg(const struct osockaddr *) to;
	syscallarg(int) tolen;
};
check_syscall_args(linux_sys_sendto)

struct sys_shutdown_args;

struct linux_sys_socketpair_args {
	syscallarg(int) domain;
	syscallarg(int) type;
	syscallarg(int) protocol;
	syscallarg(int *) rsv;
};
check_syscall_args(linux_sys_socketpair)

struct sys_mkdir_args;

struct sys_rmdir_args;

struct sys_pread_args;

struct sys_pwrite_args;

struct sys_setgid_args;

struct sys_setegid_args;

struct sys_seteuid_args;

struct linux_sys_getrlimit_args {
	syscallarg(int) which;
	syscallarg(struct orlimit *) rlp;
};
check_syscall_args(linux_sys_getrlimit)

struct linux_sys_setrlimit_args {
	syscallarg(int) which;
	syscallarg(const struct orlimit *) rlp;
};
check_syscall_args(linux_sys_setrlimit)

struct sys_lseek_args;

struct sys_truncate_args;

struct sys_ftruncate_args;

struct sys_getpgid_args;

struct sys_poll_args;

struct linux_sys_fdatasync_args {
	syscallarg(int) fd;
};
check_syscall_args(linux_sys_fdatasync)

struct sys_getsid_args;

struct sys___getcwd_args;

struct sys_fchroot_args;

struct linux_sys_getdents64_args {
	syscallarg(int) fd;
	syscallarg(struct linux_dirent64 *) dent;
	syscallarg(unsigned int) count;
};
check_syscall_args(linux_sys_getdents64)

struct linux_sys_socket_args {
	syscallarg(int) domain;
	syscallarg(int) type;
	syscallarg(int) protocol;
};
check_syscall_args(linux_sys_socket)

struct linux_sys_select_args {
	syscallarg(int) nd;
	syscallarg(fd_set *) in;
	syscallarg(fd_set *) ou;
	syscallarg(fd_set *) ex;
	syscallarg(struct timeval50 *) tv;
};
check_syscall_args(linux_sys_select)

struct linux_sys_utimes_args {
	syscallarg(const char *) path;
	syscallarg(struct linux_timeval *) tv;
};
check_syscall_args(linux_sys_utimes)

struct linux_sys_ppoll_args {
	syscallarg(struct pollfd *) fds;
	syscallarg(u_int) nfds;
	syscallarg(const struct linux_timespec *) timeout;
	syscallarg(const linux_sigset_t *) mask;
};
check_syscall_args(linux_sys_ppoll)

struct linux_sys_stat64_args {
	syscallarg(const char *) path;
	syscallarg(struct linux_stat64 *) sp;
};
check_syscall_args(linux_sys_stat64)

struct linux_sys_fstat64_args {
	syscallarg(int) fd;
	syscallarg(struct linux_stat64 *) sp;
};
check_syscall_args(linux_sys_fstat64)

struct linux_sys_lstat64_args {
	syscallarg(const char *) path;
	syscallarg(struct linux_stat64 *) sp;
};
check_syscall_args(linux_sys_lstat64)

struct linux_sys_mknod_args {
	syscallarg(const char *) path;
	syscallarg(mode_t) mode;
	syscallarg(int) dev;
};
check_syscall_args(linux_sys_mknod)

struct linux_sys_dup3_args {
	syscallarg(int) from;
	syscallarg(int) to;
	syscallarg(int) flags;
};
check_syscall_args(linux_sys_dup3)

struct linux_sys_linkat_args {
	syscallarg(int) fd1;
	syscallarg(const char *) name1;
	syscallarg(int) fd2;
	syscallarg(const char *) name2;
	syscallarg(int) flags;
};
check_syscall_args(linux_sys_linkat)

struct sys_renameat_args;

struct rump_linux_sys_mknodat_args {
	syscallarg(int) fd;
	syscallarg(const char *) path;
	syscallarg(mode_t) mode;
	syscallarg(int) PAD;
	syscallarg(unsigned) dev;
};
check_syscall_args(rump_linux_sys_mknodat)

struct sys_mkdirat_args;

struct linux_sys_faccessat_args {
	syscallarg(int) fd;
	syscallarg(const char *) path;
	syscallarg(int) amode;
};
check_syscall_args(linux_sys_faccessat)

struct linux_sys_fchmodat_args {
	syscallarg(int) fd;
	syscallarg(const char *) path;
	syscallarg(mode_t) mode;
};
check_syscall_args(linux_sys_fchmodat)

struct linux_sys_fchownat_args {
	syscallarg(int) fd;
	syscallarg(const char *) path;
	syscallarg(uid_t) owner;
	syscallarg(gid_t) group;
	syscallarg(int) flag;
};
check_syscall_args(linux_sys_fchownat)

struct linux_sys_fstatat64_args {
	syscallarg(int) fd;
	syscallarg(const char *) path;
	syscallarg(struct linux_stat *) sp;
	syscallarg(int) flag;
};
check_syscall_args(linux_sys_fstatat64)

struct linux_sys_utimensat_args {
	syscallarg(int) fd;
	syscallarg(const char *) path;
	syscallarg(struct linux_timespec *) times;
	syscallarg(int) flag;
};
check_syscall_args(linux_sys_utimensat)

struct linux_sys_openat_args {
	syscallarg(int) fd;
	syscallarg(const char *) path;
	syscallarg(int) flags;
	syscallarg(mode_t) mode;
};
check_syscall_args(linux_sys_openat)

struct sys_readlinkat_args;

struct sys_symlinkat_args;

struct linux_sys_unlinkat_args {
	syscallarg(int) fd;
	syscallarg(const char *) path;
	syscallarg(int) flag;
};
check_syscall_args(linux_sys_unlinkat)

/*
 * System call prototypes.
 */

int	linux_sys_nosys(struct lwp *, const void *, register_t *);

int	sys_read(struct lwp *, const struct sys_read_args *, register_t *);

int	sys_write(struct lwp *, const struct sys_write_args *, register_t *);

int	linux_sys_open(struct lwp *, const struct linux_sys_open_args *, register_t *);

int	sys_close(struct lwp *, const struct sys_close_args *, register_t *);

int	sys_link(struct lwp *, const struct sys_link_args *, register_t *);

int	linux_sys_unlink(struct lwp *, const struct linux_sys_unlink_args *, register_t *);

int	sys_chdir(struct lwp *, const struct sys_chdir_args *, register_t *);

int	sys_fchdir(struct lwp *, const struct sys_fchdir_args *, register_t *);

int	sys_chmod(struct lwp *, const struct sys_chmod_args *, register_t *);

int	sys___posix_chown(struct lwp *, const struct sys___posix_chown_args *, register_t *);

int	sys_getpid_with_ppid(struct lwp *, const void *, register_t *);

int	sys_setuid(struct lwp *, const struct sys_setuid_args *, register_t *);

int	sys_getuid_with_euid(struct lwp *, const void *, register_t *);

int	sys_geteuid(struct lwp *, const void *, register_t *);

int	linux_sys_recvmsg(struct lwp *, const struct linux_sys_recvmsg_args *, register_t *);

int	linux_sys_sendmsg(struct lwp *, const struct linux_sys_sendmsg_args *, register_t *);

int	linux_sys_recvfrom(struct lwp *, const struct linux_sys_recvfrom_args *, register_t *);

int	linux_sys_accept(struct lwp *, const struct linux_sys_accept_args *, register_t *);

int	linux_sys_getpeername(struct lwp *, const struct linux_sys_getpeername_args *, register_t *);

int	linux_sys_getsockname(struct lwp *, const struct linux_sys_getsockname_args *, register_t *);

int	sys_access(struct lwp *, const struct sys_access_args *, register_t *);

int	sys_sync(struct lwp *, const void *, register_t *);

int	sys_dup(struct lwp *, const struct sys_dup_args *, register_t *);

int	sys_pipe(struct lwp *, const void *, register_t *);

int	sys_getgid_with_egid(struct lwp *, const void *, register_t *);

int	linux_sys_ioctl(struct lwp *, const struct linux_sys_ioctl_args *, register_t *);

int	sys_symlink(struct lwp *, const struct sys_symlink_args *, register_t *);

int	sys_readlink(struct lwp *, const struct sys_readlink_args *, register_t *);

int	sys_umask(struct lwp *, const struct sys_umask_args *, register_t *);

int	sys_chroot(struct lwp *, const struct sys_chroot_args *, register_t *);

int	sys_getgroups(struct lwp *, const struct sys_getgroups_args *, register_t *);

int	sys_setgroups(struct lwp *, const struct sys_setgroups_args *, register_t *);

int	sys_getpgrp(struct lwp *, const void *, register_t *);

int	sys_setpgid(struct lwp *, const struct sys_setpgid_args *, register_t *);

int	sys_dup2(struct lwp *, const struct sys_dup2_args *, register_t *);

int	linux_sys_fcntl(struct lwp *, const struct linux_sys_fcntl_args *, register_t *);

int	sys_fsync(struct lwp *, const struct sys_fsync_args *, register_t *);

int	linux_sys_connect(struct lwp *, const struct linux_sys_connect_args *, register_t *);

int	linux_sys_bind(struct lwp *, const struct linux_sys_bind_args *, register_t *);

int	linux_sys_setsockopt(struct lwp *, const struct linux_sys_setsockopt_args *, register_t *);

int	sys_listen(struct lwp *, const struct sys_listen_args *, register_t *);

int	linux_sys_getsockopt(struct lwp *, const struct linux_sys_getsockopt_args *, register_t *);

int	sys_readv(struct lwp *, const struct sys_readv_args *, register_t *);

int	sys_writev(struct lwp *, const struct sys_writev_args *, register_t *);

int	sys___posix_fchown(struct lwp *, const struct sys___posix_fchown_args *, register_t *);

int	sys_fchmod(struct lwp *, const struct sys_fchmod_args *, register_t *);

int	sys_setreuid(struct lwp *, const struct sys_setreuid_args *, register_t *);

int	sys_setregid(struct lwp *, const struct sys_setregid_args *, register_t *);

int	sys___posix_rename(struct lwp *, const struct sys___posix_rename_args *, register_t *);

int	sys_flock(struct lwp *, const struct sys_flock_args *, register_t *);

int	linux_sys_sendto(struct lwp *, const struct linux_sys_sendto_args *, register_t *);

int	sys_shutdown(struct lwp *, const struct sys_shutdown_args *, register_t *);

int	linux_sys_socketpair(struct lwp *, const struct linux_sys_socketpair_args *, register_t *);

int	sys_mkdir(struct lwp *, const struct sys_mkdir_args *, register_t *);

int	sys_rmdir(struct lwp *, const struct sys_rmdir_args *, register_t *);

int	sys_setsid(struct lwp *, const void *, register_t *);

int	sys_pread(struct lwp *, const struct sys_pread_args *, register_t *);

int	sys_pwrite(struct lwp *, const struct sys_pwrite_args *, register_t *);

int	sys_setgid(struct lwp *, const struct sys_setgid_args *, register_t *);

int	sys_setegid(struct lwp *, const struct sys_setegid_args *, register_t *);

int	sys_seteuid(struct lwp *, const struct sys_seteuid_args *, register_t *);

int	linux_sys_getrlimit(struct lwp *, const struct linux_sys_getrlimit_args *, register_t *);

int	linux_sys_setrlimit(struct lwp *, const struct linux_sys_setrlimit_args *, register_t *);

int	sys_lseek(struct lwp *, const struct sys_lseek_args *, register_t *);

int	sys_truncate(struct lwp *, const struct sys_truncate_args *, register_t *);

int	sys_ftruncate(struct lwp *, const struct sys_ftruncate_args *, register_t *);

int	sys_getpgid(struct lwp *, const struct sys_getpgid_args *, register_t *);

int	sys_poll(struct lwp *, const struct sys_poll_args *, register_t *);

int	linux_sys_fdatasync(struct lwp *, const struct linux_sys_fdatasync_args *, register_t *);

int	sys_getsid(struct lwp *, const struct sys_getsid_args *, register_t *);

int	sys___getcwd(struct lwp *, const struct sys___getcwd_args *, register_t *);

int	sys_fchroot(struct lwp *, const struct sys_fchroot_args *, register_t *);

int	linux_sys_getdents64(struct lwp *, const struct linux_sys_getdents64_args *, register_t *);

int	linux_sys_socket(struct lwp *, const struct linux_sys_socket_args *, register_t *);

int	linux_sys_select(struct lwp *, const struct linux_sys_select_args *, register_t *);

int	linux_sys_utimes(struct lwp *, const struct linux_sys_utimes_args *, register_t *);

int	linux_sys_ppoll(struct lwp *, const struct linux_sys_ppoll_args *, register_t *);

int	linux_sys_stat64(struct lwp *, const struct linux_sys_stat64_args *, register_t *);

int	linux_sys_fstat64(struct lwp *, const struct linux_sys_fstat64_args *, register_t *);

int	linux_sys_lstat64(struct lwp *, const struct linux_sys_lstat64_args *, register_t *);

int	linux_sys_mknod(struct lwp *, const struct linux_sys_mknod_args *, register_t *);

int	linux_sys_dup3(struct lwp *, const struct linux_sys_dup3_args *, register_t *);

int	linux_sys_linkat(struct lwp *, const struct linux_sys_linkat_args *, register_t *);

int	sys_renameat(struct lwp *, const struct sys_renameat_args *, register_t *);

int	rump_linux_sys_mknodat(struct lwp *, const struct rump_linux_sys_mknodat_args *, register_t *);

int	sys_mkdirat(struct lwp *, const struct sys_mkdirat_args *, register_t *);

int	linux_sys_faccessat(struct lwp *, const struct linux_sys_faccessat_args *, register_t *);

int	linux_sys_fchmodat(struct lwp *, const struct linux_sys_fchmodat_args *, register_t *);

int	linux_sys_fchownat(struct lwp *, const struct linux_sys_fchownat_args *, register_t *);

int	linux_sys_fstatat64(struct lwp *, const struct linux_sys_fstatat64_args *, register_t *);

int	linux_sys_utimensat(struct lwp *, const struct linux_sys_utimensat_args *, register_t *);

int	linux_sys_openat(struct lwp *, const struct linux_sys_openat_args *, register_t *);

int	sys_readlinkat(struct lwp *, const struct sys_readlinkat_args *, register_t *);

int	sys_symlinkat(struct lwp *, const struct sys_symlinkat_args *, register_t *);

int	linux_sys_unlinkat(struct lwp *, const struct linux_sys_unlinkat_args *, register_t *);

#endif /* _RUMP_LINUX_SYS_SYSCALLARGS_H_ */
