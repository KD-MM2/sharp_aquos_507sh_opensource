/*
 * Copyright (c) 2000 IBM Deutschland Entwicklung GmbH, IBM Coporation
 * Author: Ulrich Weigand <Ulrich.Weigand@de.ibm.com>
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
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

[  0] = { 0,	0,		SEN(setup),			"setup"			},
[  1] = { 1,	TP|SE,		SEN(exit),			"exit"			},
[  2] = { 0,	TP,		SEN(fork),			"fork"			},
[  3] = { 3,	TD,		SEN(read),			"read"			},
[  4] = { 3,	TD,		SEN(write),			"write"			},
[  5] = { 3,	TD|TF,		SEN(open),			"open"			},
[  6] = { 1,	TD,		SEN(close),			"close"			},
[  7] = { 0,	0,		SEN(restart_syscall),		"restart_syscall"	},
[  8] = { 2,	TD|TF,		SEN(creat),			"creat"			},
[  9] = { 2,	TF,		SEN(link),			"link"			},
[ 10] = { 1,	TF,		SEN(unlink),			"unlink"		},
[ 11] = { 3,	TF|TP|SE|SI,	SEN(execve),			"execve"		},
[ 12] = { 1,	TF,		SEN(chdir),			"chdir"			},
[ 13] = { },
[ 14] = { 3,	TF,		SEN(mknod),			"mknod"			},
[ 15] = { 2,	TF,		SEN(chmod),			"chmod"			},
[ 16] = { },
[ 17] = { },
[ 18] = { },
[ 19] = { 3,	TD,		SEN(lseek),			"lseek"			},
[ 20] = { 0,	NF,		SEN(getpid),			"getpid"		},
[ 21] = { 5,	TF,		SEN(mount),			"mount"			},
[ 22] = { 1,	TF,		SEN(umount),			"umount"		},
[ 23] = { },
[ 24] = { },
[ 25] = { },
[ 26] = { 4,	0,		SEN(ptrace),			"ptrace"		},
[ 27] = { 1,	0,		SEN(alarm),			"alarm"			},
[ 28] = { },
[ 29] = { 0,	TS,		SEN(pause),			"pause"			},
[ 30] = { 2,	TF,		SEN(utime),			"utime"			},
[ 31] = { },
[ 32] = { },
[ 33] = { 2,	TF,		SEN(access),			"access"		},
[ 34] = { 1,	0,		SEN(nice),			"nice"			},
[ 35] = { },
[ 36] = { 0,	0,		SEN(sync),			"sync"			},
[ 37] = { 2,	TS,		SEN(kill),			"kill"			},
[ 38] = { 2,	TF,		SEN(rename),			"rename"		},
[ 39] = { 2,	TF,		SEN(mkdir),			"mkdir"			},
[ 40] = { 1,	TF,		SEN(rmdir),			"rmdir"			},
[ 41] = { 1,	TD,		SEN(dup),			"dup"			},
[ 42] = { 1,	TD,		SEN(pipe),			"pipe"			},
[ 43] = { 1,	0,		SEN(times),			"times"			},
[ 44] = { },
[ 45] = { 1,	TM|SI,		SEN(brk),			"brk"			},
[ 46] = { },
[ 47] = { },
[ 48] = { 3,	TS,		SEN(signal),			"signal"		},
[ 49] = { },
[ 50] = { },
[ 51] = { 1,	TF,		SEN(acct),			"acct"			},
[ 52] = { 2,	TF,		SEN(umount2),			"umount2"		},
[ 53] = { },
[ 54] = { 3,	TD,		SEN(ioctl),			"ioctl"			},
[ 55] = { 3,	TD,		SEN(fcntl),			"fcntl"			},
[ 56] = { },
[ 57] = { 2,	0,		SEN(setpgid),			"setpgid"		},
[ 58] = { },
[ 59] = { },
[ 60] = { 1,	NF,		SEN(umask),			"umask"			},
[ 61] = { 1,	TF,		SEN(chroot),			"chroot"		},
[ 62] = { 2,	0,		SEN(ustat),			"ustat"			},
[ 63] = { 2,	TD,		SEN(dup2),			"dup2"			},
[ 64] = { 0,	NF,		SEN(getppid),			"getppid"		},
[ 65] = { 0,	0,		SEN(getpgrp),			"getpgrp"		},
[ 66] = { 0,	0,		SEN(setsid),			"setsid"		},
[ 67] = { 3,	TS,		SEN(sigaction),			"sigaction"		},
[ 68 ... 71] = { },
[ 72] = { 3,	TS,		SEN(sigsuspend),		"sigsuspend"		},
[ 73] = { 1,	TS,		SEN(sigpending),		"sigpending"		},
[ 74] = { 2,	0,		SEN(sethostname),		"sethostname"		},
[ 75] = { 2,	0,		SEN(setrlimit),			"setrlimit"		},
[ 76] = { },
[ 77] = { 2,	0,		SEN(getrusage),			"getrusage"		},
[ 78] = { 2,	0,		SEN(gettimeofday),		"gettimeofday"		},
[ 79] = { 2,	0,		SEN(settimeofday),		"settimeofday"		},
[ 80 ... 82] = { },
[ 83] = { 2,	TF,		SEN(symlink),			"symlink"		},
[ 84] = { },
[ 85] = { 3,	TF,		SEN(readlink),			"readlink"		},
[ 86] = { 1,	TF,		SEN(uselib),			"uselib"		},
[ 87] = { 2,	TF,		SEN(swapon),			"swapon"		},
[ 88] = { 4,	0,		SEN(reboot),			"reboot"		},
[ 89] = { 3,	TD,		SEN(readdir),			"readdir"		},
[ 90] = { 1,	TD|TM|SI,	SEN(old_mmap),			"mmap"			},
[ 91] = { 2,	TM|SI,		SEN(munmap),			"munmap"		},
[ 92] = { 2,	TF,		SEN(truncate),			"truncate"		},
[ 93] = { 2,	TD,		SEN(ftruncate),			"ftruncate"		},
[ 94] = { 2,	TD,		SEN(fchmod),			"fchmod"		},
[ 95] = { },
[ 96] = { 2,	0,		SEN(getpriority),		"getpriority"		},
[ 97] = { 3,	0,		SEN(setpriority),		"setpriority"		},
[ 98] = { },
[ 99] = { 2,	TF,		SEN(statfs),			"statfs"		},
[100] = { 2,	TD,		SEN(fstatfs),			"fstatfs"		},
[101] = { },
[102] = { 2,	TD,		SEN(socketcall),		"socketcall"		},
[103] = { 3,	0,		SEN(syslog),			"syslog"		},
[104] = { 3,	0,		SEN(setitimer),			"setitimer"		},
[105] = { 2,	0,		SEN(getitimer),			"getitimer"		},
[106] = { 2,	TF,		SEN(stat),			"stat"			},
[107] = { 2,	TF,		SEN(lstat),			"lstat"			},
[108] = { 2,	TD,		SEN(fstat),			"fstat"			},
[109] = { },
[110] = { 3,	0,		SEN(lookup_dcookie),		"lookup_dcookie"	},
[111] = { 0,	0,		SEN(vhangup),			"vhangup"		},
[112] = { 0,	0,		SEN(idle),			"idle"			},
[113] = { },
[114] = { 4,	TP,		SEN(wait4),			"wait4"			},
[115] = { 1,	TF,		SEN(swapoff),			"swapoff"		},
[116] = { 1,	0,		SEN(sysinfo),			"sysinfo"		},
[117] = { 5,	TI,		SEN(ipc),			"ipc"			},
[118] = { 1,	TD,		SEN(fsync),			"fsync"			},
[119] = { 0,	TS,		SEN(sigreturn),			"sigreturn"		},
[120] = { 5,	TP,		SEN(clone),			"clone"			},
[121] = { 2,	0,		SEN(setdomainname),		"setdomainname"		},
[122] = { 1,	0,		SEN(uname),			"uname"			},
[123] = { },
[124] = { 1,	0,		SEN(adjtimex),			"adjtimex"		},
[125] = { 3,	TM|SI,		SEN(mprotect),			"mprotect"		},
[126] = { 3,	TS,		SEN(sigprocmask),		"sigprocmask"		},
[127] = { 2,	0,		SEN(create_module),		"create_module"		},
[128] = { 3,	0,		SEN(init_module),		"init_module"		},
[129] = { 2,	0,		SEN(delete_module),		"delete_module"		},
[130] = { 1,	0,		SEN(get_kernel_syms),		"get_kernel_syms"	},
[131] = { 4,	TF,		SEN(quotactl),			"quotactl"		},
[132] = { 1,	0,		SEN(getpgid),			"getpgid"		},
[133] = { 1,	TD,		SEN(fchdir),			"fchdir"		},
[134] = { 2,	0,		SEN(bdflush),			"bdflush"		},
[135] = { 3,	0,		SEN(sysfs),			"sysfs"			},
[136] = { 1,	NF,		SEN(personality),		"personality"		},
[137] = { 5,	0,		SEN(afs_syscall),		"afs_syscall"		},
[138 ... 140] = { },
[141] = { 3,	TD,		SEN(getdents),			"getdents"		},
[142] = { 5,	TD,		SEN(select),			"select"		},
[143] = { 2,	TD,		SEN(flock),			"flock"			},
[144] = { 3,	TM,		SEN(msync),			"msync"			},
[145] = { 3,	TD,		SEN(readv),			"readv"			},
[146] = { 3,	TD,		SEN(writev),			"writev"		},
[147] = { 1,	0,		SEN(getsid),			"getsid"		},
[148] = { 1,	TD,		SEN(fdatasync),			"fdatasync"		},
[149] = { 1,	0,		SEN(sysctl),			"_sysctl"		},
[150] = { 2,	TM,		SEN(mlock),			"mlock"			},
[151] = { 2,	TM,		SEN(munlock),			"munlock"		},
[152] = { 1,	TM,		SEN(mlockall),			"mlockall"		},
[153] = { 0,	TM,		SEN(munlockall),		"munlockall"		},
[154] = { 2,	0,		SEN(sched_setparam),		"sched_setparam"	},
[155] = { 2,	0,		SEN(sched_getparam),		"sched_getparam"	},
[156] = { 3,	0,		SEN(sched_setscheduler),	"sched_setscheduler"	},
[157] = { 1,	0,		SEN(sched_getscheduler),	"sched_getscheduler"	},
[158] = { 0,	0,		SEN(sched_yield),		"sched_yield"		},
[159] = { 1,	0,		SEN(sched_get_priority_max),	"sched_get_priority_max"},
[160] = { 1,	0,		SEN(sched_get_priority_min),	"sched_get_priority_min"},
[161] = { 2,	0,		SEN(sched_rr_get_interval),	"sched_rr_get_interval"	},
[162] = { 2,	0,		SEN(nanosleep),			"nanosleep"		},
[163] = { 5,	TM|SI,		SEN(mremap),			"mremap"		},
[164 ... 166] = { },
[167] = { 5,	0,		SEN(query_module),		"query_module"		},
[168] = { 3,	TD,		SEN(poll),			"poll"			},
[169] = { 3,	0,		SEN(nfsservctl),		"nfsservctl"		},
[170 ... 171] = { },
[172] = { 5,	0,		SEN(prctl),			"prctl"			},
[173] = { 0,	TS,		SEN(sigreturn),			"rt_sigreturn"		},
[174] = { 4,	TS,		SEN(rt_sigaction),		"rt_sigaction"		},
[175] = { 4,	TS,		SEN(rt_sigprocmask),		"rt_sigprocmask"	},
[176] = { 2,	TS,		SEN(rt_sigpending),		"rt_sigpending"		},
[177] = { 4,	TS,		SEN(rt_sigtimedwait),		"rt_sigtimedwait"	},
[178] = { 3,	TS,		SEN(rt_sigqueueinfo),		"rt_sigqueueinfo"	},
[179] = { 2,	TS,		SEN(rt_sigsuspend),		"rt_sigsuspend"		},
[180] = { 4,	TD,		SEN(pread),			"pread64"		},
[181] = { 4,	TD,		SEN(pwrite),			"pwrite64"		},
[182] = { },
[183] = { 2,	TF,		SEN(getcwd),			"getcwd"		},
[184] = { 2,	0,		SEN(capget),			"capget"		},
[185] = { 2,	0,		SEN(capset),			"capset"		},
[186] = { 2,	TS,		SEN(sigaltstack),		"sigaltstack"		},
[187] = { 4,	TD|TN,		SEN(sendfile),			"sendfile"		},
[188] = { 5,	TN,		SEN(getpmsg),			"getpmsg"		},
[189] = { 5,	TN,		SEN(putpmsg),			"putpmsg"		},
[190] = { 0,	TP,		SEN(vfork),			"vfork"			},
[191] = { 2,	0,		SEN(getrlimit),			"getrlimit"		},
[196 ... 197] = { },
[198] = { 3,	TF,		SEN(chown),			"lchown"		},
[199] = { 0,	NF,		SEN(getuid),			"getuid"		},
[200] = { 0,	NF,		SEN(getgid),			"getgid"		},
[201] = { 0,	NF,		SEN(geteuid),			"geteuid"		},
[202] = { 0,	NF,		SEN(getegid),			"getegid"		},
[203] = { 2,	0,		SEN(setreuid),			"setreuid"		},
[204] = { 2,	0,		SEN(setregid),			"setregid"		},
[205] = { 2,	0,		SEN(getgroups),			"getgroups"		},
[206] = { 2,	0,		SEN(setgroups),			"setgroups"		},
[207] = { 3,	TD,		SEN(fchown),			"fchown"		},
[208] = { 3,	0,		SEN(setresuid),			"setresuid"		},
[209] = { 3,	0,		SEN(getresuid),			"getresuid"		},
[210] = { 3,	0,		SEN(setresgid),			"setresgid"		},
[211] = { 3,	0,		SEN(getresgid),			"getresgid"		},
[212] = { 3,	TF,		SEN(chown),			"chown"			},
[213] = { 1,	0,		SEN(setuid),			"setuid"		},
[214] = { 1,	0,		SEN(setgid),			"setgid"		},
[215] = { 1,	NF,		SEN(setfsuid),			"setfsuid"		},
[216] = { 1,	NF,		SEN(setfsgid),			"setfsgid"		},
[217] = { 2,	TF,		SEN(pivotroot),			"pivot_root"		},
[218] = { 3,	TM,		SEN(mincore),			"mincore"		},
[219] = { 3,	TM,		SEN(madvise),			"madvise"		},
[220] = { 3,	TD,		SEN(getdents64),		"getdents64"		},
[221] = { },
[222] = { 3,	TD,		SEN(readahead),			"readahead"		},
[223] = { },
[224] = { 5,	TF,		SEN(setxattr),			"setxattr"		},
[225] = { 5,	TF,		SEN(setxattr),			"lsetxattr"		},
[226] = { 5,	TD,		SEN(fsetxattr),			"fsetxattr"		},
[227] = { 4,	TF,		SEN(getxattr),			"getxattr"		},
[228] = { 4,	TF,		SEN(getxattr),			"lgetxattr"		},
[229] = { 4,	TD,		SEN(fgetxattr),			"fgetxattr"		},
[230] = { 3,	TF,		SEN(listxattr),			"listxattr"		},
[231] = { 3,	TF,		SEN(listxattr),			"llistxattr"		},
[232] = { 3,	TD,		SEN(flistxattr),		"flistxattr"		},
[233] = { 2,	TF,		SEN(removexattr),		"removexattr"		},
[234] = { 2,	TF,		SEN(removexattr),		"lremovexattr"		},
[235] = { 2,	TD,		SEN(fremovexattr),		"fremovexattr"		},
[236] = { 0,	NF,		SEN(gettid),			"gettid"		},
[237] = { 2,	TS,		SEN(kill),			"tkill"			},
[238] = { 6,	0,		SEN(futex),			"futex"			},
[239] = { 3,	0,		SEN(sched_setaffinity),		"sched_setaffinity"	},
[240] = { 3,	0,		SEN(sched_getaffinity),		"sched_getaffinity"	},
[241] = { 3,	TS,		SEN(tgkill),			"tgkill"		},
[242] = { },
[243] = { 2,	0,		SEN(io_setup),			"io_setup"		},
[244] = { 1,	0,		SEN(io_destroy),		"io_destroy"		},
[245] = { 5,	0,		SEN(io_getevents),		"io_getevents"		},
[246] = { 3,	0,		SEN(io_submit),			"io_submit"		},
[247] = { 3,	0,		SEN(io_cancel),			"io_cancel"		},
[248] = { 1,	TP|SE,		SEN(exit),			"exit_group"		},
[249] = { 1,	TD,		SEN(epoll_create),		"epoll_create"		},
[250] = { 4,	TD,		SEN(epoll_ctl),			"epoll_ctl"		},
[251] = { 4,	TD,		SEN(epoll_wait),		"epoll_wait"		},
[252] = { 1,	0,		SEN(set_tid_address),		"set_tid_address"	},
[253] = { 4,	TD,		SEN(fadvise64),			"fadvise64"		},
[254] = { 3,	0,		SEN(timer_create),		"timer_create"		},
[255] = { 4,	0,		SEN(timer_settime),		"timer_settime"		},
[256] = { 2,	0,		SEN(timer_gettime),		"timer_gettime"		},
[257] = { 1,	0,		SEN(timer_getoverrun),		"timer_getoverrun"	},
[258] = { 1,	0,		SEN(timer_delete),		"timer_delete"		},
[259] = { 2,	0,		SEN(clock_settime),		"clock_settime"		},
[260] = { 2,	0,		SEN(clock_gettime),		"clock_gettime"		},
[261] = { 2,	0,		SEN(clock_getres),		"clock_getres"		},
[262] = { 4,	0,		SEN(clock_nanosleep),		"clock_nanosleep"	},
[263] = { 5,	0,		SEN(vserver),			"vserver"		},
[264] = { },
[265] = { 3,	TF,		SEN(statfs64),			"statfs64"		},
[266] = { 3,	TD,		SEN(fstatfs64),			"fstatfs64"		},
[267] = { 5,	TM|SI,		SEN(remap_file_pages),		"remap_file_pages"	},
[268] = { 6,	TM,		SEN(mbind),			"mbind"			},
[269] = { 5,	TM,		SEN(get_mempolicy),		"get_mempolicy"		},
[270] = { 3,	TM,		SEN(set_mempolicy),		"set_mempolicy"		},
[271] = { 4,	0,		SEN(mq_open),			"mq_open"		},
[272] = { 1,	0,		SEN(mq_unlink),			"mq_unlink"		},
[273] = { 5,	0,		SEN(mq_timedsend),		"mq_timedsend"		},
[274] = { 5,	0,		SEN(mq_timedreceive),		"mq_timedreceive"	},
[275] = { 2,	0,		SEN(mq_notify),			"mq_notify"		},
[276] = { 3,	0,		SEN(mq_getsetattr),		"mq_getsetattr"		},
[277] = { 4,	0,		SEN(kexec_load),		"kexec_load"		},
[278] = { 5,	0,		SEN(add_key),			"add_key"		},
[279] = { 4,	0,		SEN(request_key),		"request_key"		},
[280] = { 5,	0,		SEN(keyctl),			"keyctl"		},
[281] = { 5,	TP,		SEN(waitid),			"waitid"		},
[282] = { 3,	0,		SEN(ioprio_set),		"ioprio_set"		},
[283] = { 2,	0,		SEN(ioprio_get),		"ioprio_get"		},
[284] = { 0,	TD,		SEN(inotify_init),		"inotify_init"		},
[285] = { 3,	TD,		SEN(inotify_add_watch),		"inotify_add_watch"	},
[286] = { 2,	TD,		SEN(inotify_rm_watch),		"inotify_rm_watch"	},
[287] = { 4,	TM,		SEN(migrate_pages),		"migrate_pages"		},
[288] = { 4,	TD|TF,		SEN(openat),			"openat"		},
[289] = { 3,	TD|TF,		SEN(mkdirat),			"mkdirat"		},
[290] = { 4,	TD|TF,		SEN(mknodat),			"mknodat"		},
[291] = { 5,	TD|TF,		SEN(fchownat),			"fchownat"		},
[292] = { 3,	TD|TF,		SEN(futimesat),			"futimesat"		},
[293] = { 4,	TD|TF,		SEN(newfstatat),		"newfstatat"		},
[294] = { 3,	TD|TF,		SEN(unlinkat),			"unlinkat"		},
[295] = { 4,	TD|TF,		SEN(renameat),			"renameat"		},
[296] = { 5,	TD|TF,		SEN(linkat),			"linkat"		},
[297] = { 3,	TD|TF,		SEN(symlinkat),			"symlinkat"		},
[298] = { 4,	TD|TF,		SEN(readlinkat),		"readlinkat"		},
[299] = { 3,	TD|TF,		SEN(fchmodat),			"fchmodat"		},
[300] = { 3,	TD|TF,		SEN(faccessat),			"faccessat"		},
[301] = { 6,	TD,		SEN(pselect6),			"pselect6"		},
[302] = { 5,	TD,		SEN(ppoll),			"ppoll"			},
[303] = { 1,	TP,		SEN(unshare),			"unshare"		},
[304] = { 2,	0,		SEN(set_robust_list),		"set_robust_list"	},
[305] = { 3,	0,		SEN(get_robust_list),		"get_robust_list"	},
[306] = { 6,	TD,		SEN(splice),			"splice"		},
[307] = { 4,	TD,		SEN(sync_file_range),		"sync_file_range"	},
[308] = { 4,	TD,		SEN(tee),			"tee"			},
[309] = { 4,	TD,		SEN(vmsplice),			"vmsplice"		},
[310] = { 6,	TM,		SEN(move_pages),		"move_pages"		},
[311] = { 3,	0,		SEN(getcpu),			"getcpu"		},
[312] = { 6,	TD,		SEN(epoll_pwait),		"epoll_pwait"		},
[313] = { 2,	TF,		SEN(utimes),			"utimes"		},
[314] = { 4,	TD,		SEN(fallocate),			"fallocate"		},
[315] = { 4,	TD|TF,		SEN(utimensat),			"utimensat"		},
[316] = { 3,	TD|TS,		SEN(signalfd),			"signalfd"		},
[317] = { 4,	TD,		SEN(timerfd),			"timerfd"		},
[318] = { 1,	TD,		SEN(eventfd),			"eventfd"		},
[319] = { 2,	TD,		SEN(timerfd_create),		"timerfd_create"	},
[320] = { 4,	TD,		SEN(timerfd_settime),		"timerfd_settime"	},
[321] = { 2,	TD,		SEN(timerfd_gettime),		"timerfd_gettime"	},
[322] = { 4,	TD|TS,		SEN(signalfd4),			"signalfd4"		},
[323] = { 2,	TD,		SEN(eventfd2),			"eventfd2"		},
[324] = { 1,	TD,		SEN(inotify_init1),		"inotify_init1"		},
[325] = { 2,	TD,		SEN(pipe2),			"pipe2"			},
[326] = { 3,	TD,		SEN(dup3),			"dup3"			},
[327] = { 1,	TD,		SEN(epoll_create1),		"epoll_create1"		},
[328] = { 4,	TD,		SEN(preadv),			"preadv"		},
[329] = { 4,	TD,		SEN(pwritev),			"pwritev"		},
[330] = { 4,	TP|TS,		SEN(rt_tgsigqueueinfo),		"rt_tgsigqueueinfo"	},
[331] = { 5,	TD,		SEN(perf_event_open),		"perf_event_open"	},
[332] = { 2,	TD,		SEN(fanotify_init),		"fanotify_init"		},
[333] = { 5,	TD|TF,		SEN(fanotify_mark),		"fanotify_mark"		},
[334] = { 4,	0,		SEN(prlimit64),			"prlimit64"		},
[335] = { 5,	TD|TF,		SEN(name_to_handle_at),		"name_to_handle_at"	},
[336] = { 3,	TD,		SEN(open_by_handle_at),		"open_by_handle_at"	},
[337] = { 2,	0,		SEN(clock_adjtime),		"clock_adjtime"		},
[338] = { 1,	TD,		SEN(syncfs),			"syncfs"		},
[339] = { 2,	TD,		SEN(setns),			"setns"			},
[340] = { 6,	0,		SEN(process_vm_readv),		"process_vm_readv"	},
[341] = { 6,	0,		SEN(process_vm_writev),		"process_vm_writev"	},
[342] = { 2,	0,		SEN(printargs),			"s390_runtime_instr"	},
[343] = { 5,	0,		SEN(kcmp),			"kcmp"			},
[344] = { 3,	TD,		SEN(finit_module),		"finit_module"		},
[345] = { 3,	0,		SEN(sched_setattr),		"sched_setattr"		},
[346] = { 4,	0,		SEN(sched_getattr),		"sched_getattr"		},
[347] = { 5,	TD|TF,		SEN(renameat2),			"renameat2"		},
[348] = { 3,	0,		SEN(seccomp),			"seccomp",		},
[349] = { 3,	0,		SEN(getrandom),			"getrandom",		},
[350] = { 2,	TD,		SEN(memfd_create),		"memfd_create",		},
[351] = { 3,	TD,		SEN(bpf),			"bpf",			},
[352] = { 3,	0,		SEN(printargs),			"s390_pci_mmio_write",	},
[353] = { 3,	0,		SEN(printargs),			"s390_pci_mmio_read",	},
[354] = { 5,	TD|TF|TP|SE|SI,	SEN(execveat),			"execveat",		},
[355] = { 1,	TD,		SEN(userfaultfd),		"userfaultfd",		},
[356] = { 2,	0,		SEN(membarrier),		"membarrier",		},
[357] = { 5,	TN,		SEN(recvmmsg),			"recvmmsg"		},
[358] = { 4,	TN,		SEN(sendmmsg),			"sendmmsg"		},
[359] = { 3,	TN,		SEN(socket),			"socket"		},
[360] = { 4,	TN,		SEN(socketpair),		"socketpair"		},
[361] = { 3,	TN,		SEN(bind),			"bind"			},
[362] = { 3,	TN,		SEN(connect),			"connect"		},
[363] = { 2,	TN,		SEN(listen),			"listen"		},
[364] = { 4,	TN,		SEN(accept4),			"accept4"		},
[365] = { 5,	TN,		SEN(getsockopt),		"getsockopt"		},
[366] = { 5,	TN,		SEN(setsockopt),		"setsockopt"		},
[367] = { 3,	TN,		SEN(getsockname),		"getsockname"		},
[368] = { 3,	TN,		SEN(getpeername),		"getpeername"		},
[369] = { 6,	TN,		SEN(sendto),			"sendto"		},
[370] = { 3,	TN,		SEN(sendmsg),			"sendmsg"		},
[371] = { 6,	TN,		SEN(recvfrom),			"recvfrom"		},
[372] = { 3,	TN,		SEN(recvmsg),			"recvmsg"		},
[373] = { 2,	TN,		SEN(shutdown),			"shutdown"		},
[374] = { 3,	TM,		SEN(mlock2),			"mlock2"		},
[375 ... 399] = { },

#define SYS_socket_subcall	400
#include "subcall.h"
