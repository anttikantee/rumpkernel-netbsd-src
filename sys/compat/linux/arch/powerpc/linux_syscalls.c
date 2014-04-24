/* $NetBSD: linux_syscalls.c,v 1.64 2014/04/08 16:49:26 njoly Exp $ */

/*
 * System call names.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	NetBSD: syscalls.master,v 1.59 2014/04/08 16:48:01 njoly Exp  
 */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: linux_syscalls.c,v 1.64 2014/04/08 16:49:26 njoly Exp $");

#if defined(_KERNEL_OPT)
#include <sys/param.h>
#include <sys/poll.h>
#include <sys/systm.h>
#include <sys/signal.h>
#include <sys/mount.h>
#include <sys/syscallargs.h>
#include <compat/linux/common/linux_types.h>
#include <compat/linux/common/linux_signal.h>
#include <compat/linux/common/linux_siginfo.h>
#include <compat/linux/common/linux_machdep.h>
#include <compat/linux/common/linux_mmap.h>
#include <compat/linux/linux_syscallargs.h>
#endif /* _KERNEL_OPT */

const char *const linux_syscallnames[] = {
	/*   0 */	"syscall",
	/*   1 */	"exit",
	/*   2 */	"fork",
	/*   3 */	"read",
	/*   4 */	"write",
	/*   5 */	"open",
	/*   6 */	"close",
	/*   7 */	"waitpid",
	/*   8 */	"creat",
	/*   9 */	"link",
	/*  10 */	"unlink",
	/*  11 */	"execve",
	/*  12 */	"chdir",
	/*  13 */	"time",
	/*  14 */	"mknod",
	/*  15 */	"chmod",
	/*  16 */	"__posix_lchown",
	/*  17 */	"#17 (obsolete break)",
	/*  18 */	"#18 (obsolete ostat)",
	/*  19 */	"lseek",
	/*  20 */	"getpid",
	/*  21 */	"#21 (unimplemented mount)",
	/*  22 */	"#22 (obsolete umount)",
	/*  23 */	"setuid",
	/*  24 */	"getuid",
	/*  25 */	"stime",
	/*  26 */	"ptrace",
	/*  27 */	"alarm",
	/*  28 */	"#28 (obsolete ofstat)",
	/*  29 */	"pause",
	/*  30 */	"utime",
	/*  31 */	"#31 (obsolete stty)",
	/*  32 */	"#32 (obsolete gtty)",
	/*  33 */	"access",
	/*  34 */	"nice",
	/*  35 */	"#35 (obsolete ftime)",
	/*  36 */	"sync",
	/*  37 */	"kill",
	/*  38 */	"__posix_rename",
	/*  39 */	"mkdir",
	/*  40 */	"rmdir",
	/*  41 */	"dup",
	/*  42 */	"pipe",
	/*  43 */	"times",
	/*  44 */	"#44 (obsolete prof)",
	/*  45 */	"brk",
	/*  46 */	"setgid",
	/*  47 */	"getgid",
	/*  48 */	"signal",
	/*  49 */	"geteuid",
	/*  50 */	"getegid",
	/*  51 */	"acct",
	/*  52 */	"#52 (unimplemented umount)",
	/*  53 */	"#53 (obsolete lock)",
	/*  54 */	"ioctl",
	/*  55 */	"fcntl",
	/*  56 */	"#56 (obsolete mpx)",
	/*  57 */	"setpgid",
	/*  58 */	"#58 (obsolete ulimit)",
	/*  59 */	"olduname",
	/*  60 */	"umask",
	/*  61 */	"chroot",
	/*  62 */	"#62 (unimplemented ustat)",
	/*  63 */	"dup2",
	/*  64 */	"getppid",
	/*  65 */	"getpgrp",
	/*  66 */	"setsid",
	/*  67 */	"sigaction",
	/*  68 */	"siggetmask",
	/*  69 */	"sigsetmask",
	/*  70 */	"setreuid",
	/*  71 */	"setregid",
	/*  72 */	"sigsuspend",
	/*  73 */	"sigpending",
	/*  74 */	"sethostname",
	/*  75 */	"setrlimit",
	/*  76 */	"getrlimit",
	/*  77 */	"getrusage",
	/*  78 */	"gettimeofday",
	/*  79 */	"settimeofday",
	/*  80 */	"getgroups",
	/*  81 */	"setgroups",
	/*  82 */	"select",
	/*  83 */	"symlink",
	/*  84 */	"oolstat",
	/*  85 */	"readlink",
#ifdef EXEC_AOUT
	/*  86 */	"uselib",
#else
	/*  86 */	"#86 (unimplemented sys_uselib)",
#endif
	/*  87 */	"swapon",
	/*  88 */	"reboot",
	/*  89 */	"readdir",
	/*  90 */	"mmap",
	/*  91 */	"munmap",
	/*  92 */	"truncate",
	/*  93 */	"ftruncate",
	/*  94 */	"fchmod",
	/*  95 */	"__posix_fchown",
	/*  96 */	"getpriority",
	/*  97 */	"setpriority",
	/*  98 */	"profil",
	/*  99 */	"statfs",
	/* 100 */	"fstatfs",
	/* 101 */	"#101 (unimplemented ioperm)",
	/* 102 */	"socketcall",
	/* 103 */	"#103 (unimplemented syslog)",
	/* 104 */	"setitimer",
	/* 105 */	"getitimer",
	/* 106 */	"stat",
	/* 107 */	"lstat",
	/* 108 */	"fstat",
	/* 109 */	"uname",
	/* 110 */	"#110 (unimplemented iopl)",
	/* 111 */	"#111 (unimplemented vhangup)",
	/* 112 */	"#112 (unimplemented idle)",
	/* 113 */	"#113 (unimplemented vm86old)",
	/* 114 */	"wait4",
	/* 115 */	"swapoff",
	/* 116 */	"sysinfo",
	/* 117 */	"ipc",
	/* 118 */	"fsync",
	/* 119 */	"sigreturn",
	/* 120 */	"clone",
	/* 121 */	"setdomainname",
	/* 122 */	"new_uname",
	/* 123 */	"#123 (unimplemented modify_ldt)",
	/* 124 */	"#124 (unimplemented adjtimex)",
	/* 125 */	"mprotect",
	/* 126 */	"sigprocmask",
	/* 127 */	"#127 (unimplemented create_module)",
	/* 128 */	"#128 (unimplemented init_module)",
	/* 129 */	"#129 (unimplemented delete_module)",
	/* 130 */	"#130 (unimplemented get_kernel_syms)",
	/* 131 */	"#131 (unimplemented quotactl)",
	/* 132 */	"getpgid",
	/* 133 */	"fchdir",
	/* 134 */	"#134 (unimplemented bdflush)",
	/* 135 */	"#135 (unimplemented sysfs)",
	/* 136 */	"personality",
	/* 137 */	"#137 (unimplemented afs_syscall)",
	/* 138 */	"setfsuid",
	/* 139 */	"setfsgid",
	/* 140 */	"llseek",
	/* 141 */	"getdents",
	/* 142 */	"new_select",
	/* 143 */	"flock",
	/* 144 */	"__msync13",
	/* 145 */	"readv",
	/* 146 */	"writev",
	/* 147 */	"getsid",
	/* 148 */	"fdatasync",
	/* 149 */	"__sysctl",
	/* 150 */	"mlock",
	/* 151 */	"munlock",
	/* 152 */	"mlockall",
	/* 153 */	"munlockall",
	/* 154 */	"sched_setparam",
	/* 155 */	"sched_getparam",
	/* 156 */	"sched_setscheduler",
	/* 157 */	"sched_getscheduler",
	/* 158 */	"sched_yield",
	/* 159 */	"sched_get_priority_max",
	/* 160 */	"sched_get_priority_min",
	/* 161 */	"#161 (unimplemented sched_rr_get_interval)",
	/* 162 */	"nanosleep",
	/* 163 */	"mremap",
	/* 164 */	"setresuid",
	/* 165 */	"getresuid",
	/* 166 */	"#166 (unimplemented query_module)",
	/* 167 */	"poll",
	/* 168 */	"#168 (unimplemented nfsservctl)",
	/* 169 */	"setresgid",
	/* 170 */	"getresgid",
	/* 171 */	"#171 (unimplemented prctl)",
	/* 172 */	"rt_sigreturn",
	/* 173 */	"rt_sigaction",
	/* 174 */	"rt_sigprocmask",
	/* 175 */	"rt_sigpending",
	/* 176 */	"rt_sigtimedwait",
	/* 177 */	"rt_queueinfo",
	/* 178 */	"rt_sigsuspend",
	/* 179 */	"pread",
	/* 180 */	"pwrite",
	/* 181 */	"__posix_chown",
	/* 182 */	"__getcwd",
	/* 183 */	"#183 (unimplemented capget)",
	/* 184 */	"#184 (unimplemented capset)",
	/* 185 */	"sigaltstack",
	/* 186 */	"#186 (unimplemented sendfile)",
	/* 187 */	"#187 (unimplemented getpmsg)",
	/* 188 */	"#188 (unimplemented putpmsg)",
	/* 189 */	"__vfork14",
	/* 190 */	"ugetrlimit",
	/* 191 */	"#191 (unimplemented / * unused * /)",
#define linux_sys_mmap2_args linux_sys_mmap_args
	/* 192 */	"mmap2",
	/* 193 */	"truncate64",
	/* 194 */	"ftruncate64",
	/* 195 */	"stat64",
	/* 196 */	"lstat64",
	/* 197 */	"fstat64",
	/* 198 */	"#198 (unimplemented sys_pciconfig_read)",
	/* 199 */	"#199 (unimplemented sys_pciconfig_write)",
	/* 200 */	"#200 (unimplemented sys_pciconfig_iobase)",
	/* 201 */	"#201 (unimplemented / * Unused ( MacOnLinux project ) * /)",
	/* 202 */	"getdents64",
	/* 203 */	"#203 (unimplemented pivot_root)",
	/* 204 */	"fcntl64",
	/* 205 */	"mincore",
	/* 206 */	"madvise",
	/* 207 */	"gettid",
	/* 208 */	"tkill",
	/* 209 */	"setxattr",
	/* 210 */	"lsetxattr",
	/* 211 */	"fsetxattr",
	/* 212 */	"getxattr",
	/* 213 */	"lgetxattr",
	/* 214 */	"fgetxattr",
	/* 215 */	"listxattr",
	/* 216 */	"llistxattr",
	/* 217 */	"flistxattr",
	/* 218 */	"removexattr",
	/* 219 */	"lremovexattr",
	/* 220 */	"fremovexattr",
	/* 221 */	"futex",
	/* 222 */	"sched_setaffinity",
	/* 223 */	"sched_getaffinity",
	/* 224 */	"#224 (unimplemented / * unused * /)",
	/* 225 */	"#225 (unimplemented tuxcall)",
	/* 226 */	"#226 (unimplemented sendfile64)",
	/* 227 */	"#227 (unimplemented io_setup)",
	/* 228 */	"#228 (unimplemented io_destroy)",
	/* 229 */	"#229 (unimplemented io_getevents)",
	/* 230 */	"#230 (unimplemented io_submit)",
	/* 231 */	"#231 (unimplemented io_cancel)",
	/* 232 */	"set_tid_address",
	/* 233 */	"fadvise64",
	/* 234 */	"exit_group",
	/* 235 */	"#235 (unimplemented lookup_dcookie)",
	/* 236 */	"#236 (unimplemented epoll_create)",
	/* 237 */	"#237 (unimplemented epoll_ctl)",
	/* 238 */	"#238 (unimplemented epoll_wait)",
	/* 239 */	"#239 (unimplemented remap_file_pages)",
	/* 240 */	"#240 (unimplemented timer_create)",
	/* 241 */	"#241 (unimplemented timer_settime)",
	/* 242 */	"#242 (unimplemented timer_gettime)",
	/* 243 */	"#243 (unimplemented timer_getoverrun)",
	/* 244 */	"#244 (unimplemented timer_delete)",
	/* 245 */	"clock_settime",
	/* 246 */	"clock_gettime",
	/* 247 */	"clock_getres",
	/* 248 */	"clock_nanosleep",
	/* 249 */	"#249 (unimplemented swapcontext)",
	/* 250 */	"tgkill",
	/* 251 */	"utimes",
	/* 252 */	"statfs64",
	/* 253 */	"fstatfs64",
	/* 254 */	"fadvise64_64",
	/* 255 */	"#255 (unimplemented rtas)",
	/* 256 */	"#256 (unimplemented / * reserved for sys_debug_setcontext * /)",
	/* 257 */	"#257 (unimplemented / * reserved for vserver * /)",
	/* 258 */	"#258 (unimplemented / * reserved for new sys_remap_file_pages * /)",
	/* 259 */	"#259 (unimplemented / * reserved for new sys_mbind * /)",
	/* 260 */	"#260 (unimplemented / * reserved for new sys_get_mempolicy * /)",
	/* 261 */	"#261 (unimplemented / * reserved for new sys_set_mempolicy * /)",
	/* 262 */	"#262 (unimplemented mq_open)",
	/* 263 */	"#263 (unimplemented mq_unlink)",
	/* 264 */	"#264 (unimplemented mq_timedsend)",
	/* 265 */	"#265 (unimplemented mq_timedreceive)",
	/* 266 */	"#266 (unimplemented mq_notify)",
	/* 267 */	"#267 (unimplemented mq_getsetattr)",
	/* 268 */	"#268 (unimplemented kexec_load)",
	/* 269 */	"#269 (unimplemented add_key)",
	/* 270 */	"#270 (unimplemented request_key)",
	/* 271 */	"#271 (unimplemented keyctl)",
	/* 272 */	"#272 (unimplemented waitid)",
	/* 273 */	"#273 (unimplemented ioprio_set)",
	/* 274 */	"#274 (unimplemented ioprio_get)",
	/* 275 */	"#275 (unimplemented inotify_init)",
	/* 276 */	"#276 (unimplemented inotify_add_watch)",
	/* 277 */	"#277 (unimplemented inotify_rm_watch)",
	/* 278 */	"#278 (unimplemented spu_run)",
	/* 279 */	"#279 (unimplemented spu_create)",
	/* 280 */	"#280 (unimplemented pselect6)",
	/* 281 */	"ppoll",
	/* 282 */	"#282 (unimplemented unshare)",
	/* 283 */	"#283 (unimplemented splice)",
	/* 284 */	"#284 (unimplemented tee)",
	/* 285 */	"#285 (unimplemented vmsplice)",
	/* 286 */	"openat",
	/* 287 */	"mkdirat",
	/* 288 */	"mknodat",
	/* 289 */	"fchownat",
	/* 290 */	"#290 (unimplemented futimesat)",
	/* 291 */	"fstatat64",
	/* 292 */	"unlinkat",
	/* 293 */	"renameat",
	/* 294 */	"linkat",
	/* 295 */	"symlinkat",
	/* 296 */	"readlinkat",
	/* 297 */	"fchmodat",
	/* 298 */	"faccessat",
	/* 299 */	"set_robust_list",
	/* 300 */	"get_robust_list",
	/* 301 */	"#301 (unimplemented move_pages)",
	/* 302 */	"#302 (unimplemented getcpu)",
	/* 303 */	"#303 (unimplemented epoll_wait)",
	/* 304 */	"utimensat",
	/* 305 */	"#305 (unimplemented signalfd)",
	/* 306 */	"#306 (unimplemented timerfd_create)",
	/* 307 */	"#307 (unimplemented eventfd)",
	/* 308 */	"#308 (unimplemented sync_file_range2)",
	/* 309 */	"#309 (unimplemented fallocate)",
	/* 310 */	"#310 (unimplemented subpage_prot)",
	/* 311 */	"#311 (unimplemented timerfd_settime)",
	/* 312 */	"#312 (unimplemented timerfd_gettime)",
	/* 313 */	"#313 (unimplemented signalfd4)",
	/* 314 */	"#314 (unimplemented eventfd2)",
	/* 315 */	"#315 (unimplemented epoll_create1)",
	/* 316 */	"dup3",
	/* 317 */	"pipe2",
	/* 318 */	"#318 (unimplemented inotify_init1)",
	/* 319 */	"#319 (unimplemented perf_event_open)",
	/* 320 */	"#320 (unimplemented preadv)",
	/* 321 */	"#321 (unimplemented pwritev)",
	/* 322 */	"#322 (unimplemented rt_tgsigqueueinfo)",
	/* 323 */	"# filler",
	/* 324 */	"# filler",
	/* 325 */	"# filler",
	/* 326 */	"# filler",
	/* 327 */	"# filler",
	/* 328 */	"# filler",
	/* 329 */	"# filler",
	/* 330 */	"# filler",
	/* 331 */	"# filler",
	/* 332 */	"# filler",
	/* 333 */	"# filler",
	/* 334 */	"# filler",
	/* 335 */	"# filler",
	/* 336 */	"# filler",
	/* 337 */	"# filler",
	/* 338 */	"# filler",
	/* 339 */	"# filler",
	/* 340 */	"# filler",
	/* 341 */	"# filler",
	/* 342 */	"# filler",
	/* 343 */	"# filler",
	/* 344 */	"# filler",
	/* 345 */	"# filler",
	/* 346 */	"# filler",
	/* 347 */	"# filler",
	/* 348 */	"# filler",
	/* 349 */	"# filler",
	/* 350 */	"# filler",
	/* 351 */	"# filler",
	/* 352 */	"# filler",
	/* 353 */	"# filler",
	/* 354 */	"# filler",
	/* 355 */	"# filler",
	/* 356 */	"# filler",
	/* 357 */	"# filler",
	/* 358 */	"# filler",
	/* 359 */	"# filler",
	/* 360 */	"# filler",
	/* 361 */	"# filler",
	/* 362 */	"# filler",
	/* 363 */	"# filler",
	/* 364 */	"# filler",
	/* 365 */	"# filler",
	/* 366 */	"# filler",
	/* 367 */	"# filler",
	/* 368 */	"# filler",
	/* 369 */	"# filler",
	/* 370 */	"# filler",
	/* 371 */	"# filler",
	/* 372 */	"# filler",
	/* 373 */	"# filler",
	/* 374 */	"# filler",
	/* 375 */	"# filler",
	/* 376 */	"# filler",
	/* 377 */	"# filler",
	/* 378 */	"# filler",
	/* 379 */	"# filler",
	/* 380 */	"# filler",
	/* 381 */	"# filler",
	/* 382 */	"# filler",
	/* 383 */	"# filler",
	/* 384 */	"# filler",
	/* 385 */	"# filler",
	/* 386 */	"# filler",
	/* 387 */	"# filler",
	/* 388 */	"# filler",
	/* 389 */	"# filler",
	/* 390 */	"# filler",
	/* 391 */	"# filler",
	/* 392 */	"# filler",
	/* 393 */	"# filler",
	/* 394 */	"# filler",
	/* 395 */	"# filler",
	/* 396 */	"# filler",
	/* 397 */	"# filler",
	/* 398 */	"# filler",
	/* 399 */	"# filler",
	/* 400 */	"# filler",
	/* 401 */	"# filler",
	/* 402 */	"# filler",
	/* 403 */	"# filler",
	/* 404 */	"# filler",
	/* 405 */	"# filler",
	/* 406 */	"# filler",
	/* 407 */	"# filler",
	/* 408 */	"# filler",
	/* 409 */	"# filler",
	/* 410 */	"# filler",
	/* 411 */	"# filler",
	/* 412 */	"# filler",
	/* 413 */	"# filler",
	/* 414 */	"# filler",
	/* 415 */	"# filler",
	/* 416 */	"# filler",
	/* 417 */	"# filler",
	/* 418 */	"# filler",
	/* 419 */	"# filler",
	/* 420 */	"# filler",
	/* 421 */	"# filler",
	/* 422 */	"# filler",
	/* 423 */	"# filler",
	/* 424 */	"# filler",
	/* 425 */	"# filler",
	/* 426 */	"# filler",
	/* 427 */	"# filler",
	/* 428 */	"# filler",
	/* 429 */	"# filler",
	/* 430 */	"# filler",
	/* 431 */	"# filler",
	/* 432 */	"# filler",
	/* 433 */	"# filler",
	/* 434 */	"# filler",
	/* 435 */	"# filler",
	/* 436 */	"# filler",
	/* 437 */	"# filler",
	/* 438 */	"# filler",
	/* 439 */	"# filler",
	/* 440 */	"# filler",
	/* 441 */	"# filler",
	/* 442 */	"# filler",
	/* 443 */	"# filler",
	/* 444 */	"# filler",
	/* 445 */	"# filler",
	/* 446 */	"# filler",
	/* 447 */	"# filler",
	/* 448 */	"# filler",
	/* 449 */	"# filler",
	/* 450 */	"# filler",
	/* 451 */	"# filler",
	/* 452 */	"# filler",
	/* 453 */	"# filler",
	/* 454 */	"# filler",
	/* 455 */	"# filler",
	/* 456 */	"# filler",
	/* 457 */	"# filler",
	/* 458 */	"# filler",
	/* 459 */	"# filler",
	/* 460 */	"# filler",
	/* 461 */	"# filler",
	/* 462 */	"# filler",
	/* 463 */	"# filler",
	/* 464 */	"# filler",
	/* 465 */	"# filler",
	/* 466 */	"# filler",
	/* 467 */	"# filler",
	/* 468 */	"# filler",
	/* 469 */	"# filler",
	/* 470 */	"# filler",
	/* 471 */	"# filler",
	/* 472 */	"# filler",
	/* 473 */	"# filler",
	/* 474 */	"# filler",
	/* 475 */	"# filler",
	/* 476 */	"# filler",
	/* 477 */	"# filler",
	/* 478 */	"# filler",
	/* 479 */	"# filler",
	/* 480 */	"# filler",
	/* 481 */	"# filler",
	/* 482 */	"# filler",
	/* 483 */	"# filler",
	/* 484 */	"# filler",
	/* 485 */	"# filler",
	/* 486 */	"# filler",
	/* 487 */	"# filler",
	/* 488 */	"# filler",
	/* 489 */	"# filler",
	/* 490 */	"# filler",
	/* 491 */	"# filler",
	/* 492 */	"# filler",
	/* 493 */	"# filler",
	/* 494 */	"# filler",
	/* 495 */	"# filler",
	/* 496 */	"# filler",
	/* 497 */	"# filler",
	/* 498 */	"# filler",
	/* 499 */	"# filler",
	/* 500 */	"# filler",
	/* 501 */	"# filler",
	/* 502 */	"# filler",
	/* 503 */	"# filler",
	/* 504 */	"# filler",
	/* 505 */	"# filler",
	/* 506 */	"# filler",
	/* 507 */	"# filler",
	/* 508 */	"# filler",
	/* 509 */	"# filler",
	/* 510 */	"# filler",
	/* 511 */	"# filler",
};
