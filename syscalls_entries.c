#include "header.h"

t_entry		g_entries[] = {
  [0] = {
    .name  = "read",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [1] = {
    .name  = "write",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [2] = {
    .name  = "open",
    .nargs = 3,
    .args  = {ARG_STR, ARG_INT, ARG_INT, -1, -1, -1}},
  [3] = {
    .name  = "close",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [4] = {
    .name  = "stat",
    .nargs = 2,
    .args  = {ARG_STR, ARG_PTR, -1, -1, -1, -1}},
  [5] = {
    .name  = "fstat",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [6] = {
    .name  = "lstat",
    .nargs = 2,
    .args  = {ARG_STR, ARG_PTR, -1, -1, -1, -1}},
  [7] = {
    .name  = "poll",
    .nargs = 3,
    .args  = {ARG_PTR, ARG_INT, ARG_INT, -1, -1, -1}},
  [8] = {
    .name  = "lseek",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [9] = {
    .name  = "mmap",
    .nargs = 6,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_INT}},
  [10] = {
    .name  = "mprotect",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [11] = {
    .name  = "munmap",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [12] = {
    .name  = "brk",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [13] = {
    .name  = "rt_sigaction",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, ARG_INT, -1, -1}},
  [14] = {
    .name  = "rt_sigprocmask",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, ARG_INT, -1, -1}},
  [15] = {
    .name  = "rt_sigreturn",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [16] = {
    .name  = "ioctl",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [17] = {
    .name  = "pread64",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_INT, -1, -1}},
  [18] = {
    .name  = "pwrite64",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_INT, -1, -1}},
  [19] = {
    .name  = "readv",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [20] = {
    .name  = "writev",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [21] = {
    .name  = "access",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [22] = {
    .name  = "pipe",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [23] = {
    .name  = "select",
    .nargs = 5,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, -1}},
  [24] = {
    .name  = "sched_yield",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [25] = {
    .name  = "mremap",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1}},
  [26] = {
    .name  = "msync",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [27] = {
    .name  = "mincore",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [28] = {
    .name  = "madvise",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [29] = {
    .name  = "shmget",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [30] = {
    .name  = "shmat",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [31] = {
    .name  = "shmctl",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [32] = {
    .name  = "dup",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [33] = {
    .name  = "dup2",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [34] = {
    .name  = "pause",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [35] = {
    .name  = "nanosleep",
    .nargs = 2,
    .args  = {ARG_PTR, ARG_PTR, -1, -1, -1, -1}},
  [36] = {
    .name  = "getitimer",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [37] = {
    .name  = "alarm",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [38] = {
    .name  = "setitimer",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [39] = {
    .name  = "getpid",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [40] = {
    .name  = "sendfile",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_INT, -1, -1}},
  [41] = {
    .name  = "socket",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [42] = {
    .name  = "connect",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [43] = {
    .name  = "accept",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [44] = {
    .name  = "sendto",
    .nargs = 6,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, ARG_PTR, ARG_INT}},
  [45] = {
    .name  = "recvfrom",
    .nargs = 6,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, ARG_PTR, ARG_PTR}},
  [46] = {
    .name  = "sendmsg",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [47] = {
    .name  = "recvmsg",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [48] = {
    .name  = "shutdown",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [49] = {
    .name  = "bind",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [50] = {
    .name  = "listen",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [51] = {
    .name  = "getsockname",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [52] = {
    .name  = "getpeername",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [53] = {
    .name  = "socketpair",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_PTR, -1, -1}},
  [54] = {
    .name  = "setsockopt",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_STR, ARG_INT, -1}},
  [55] = {
    .name  = "getsockopt",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_STR, ARG_PTR, -1}},
  [56] = {
    .name  = "clone",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, ARG_INT, -1}},
  [57] = {
    .name  = "fork",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [58] = {
    .name  = "vfork",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [59] = {
    .name  = "execve",
    .nargs = 3,
    .args  = {ARG_STR, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [60] = {
    .name  = "exit",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [61] = {
    .name  = "wait4",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_PTR, -1, -1}},
  [62] = {
    .name  = "kill",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [63] = {
    .name  = "uname",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [64] = {
    .name  = "semget",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [65] = {
    .name  = "semop",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [66] = {
    .name  = "semctl",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1, -1}},
  [67] = {
    .name  = "shmdt",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [68] = {
    .name  = "msgget",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [69] = {
    .name  = "msgsnd",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, -1, -1}},
  [70] = {
    .name  = "msgrcv",
    .nargs = 5,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, ARG_INT, -1}},
  [71] = {
    .name  = "msgctl",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [72] = {
    .name  = "fcntl",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [73] = {
    .name  = "flock",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [74] = {
    .name  = "fsync",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [75] = {
    .name  = "fdatasync",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [76] = {
    .name  = "truncate",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [77] = {
    .name  = "ftruncate",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [78] = {
    .name  = "getdents",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [79] = {
    .name  = "getcwd",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [80] = {
    .name  = "chdir",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [81] = {
    .name  = "fchdir",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [82] = {
    .name  = "rename",
    .nargs = 2,
    .args  = {ARG_STR, ARG_STR, -1, -1, -1, -1}},
  [83] = {
    .name  = "mkdir",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [84] = {
    .name  = "rmdir",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [85] = {
    .name  = "creat",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [86] = {
    .name  = "link",
    .nargs = 2,
    .args  = {ARG_STR, ARG_STR, -1, -1, -1, -1}},
  [87] = {
    .name  = "unlink",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [88] = {
    .name  = "symlink",
    .nargs = 2,
    .args  = {ARG_STR, ARG_STR, -1, -1, -1, -1}},
  [89] = {
    .name  = "readlink",
    .nargs = 3,
    .args  = {ARG_STR, ARG_STR, ARG_INT, -1, -1, -1}},
  [90] = {
    .name  = "chmod",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [91] = {
    .name  = "fchmod",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [92] = {
    .name  = "chown",
    .nargs = 3,
    .args  = {ARG_STR, ARG_INT, ARG_INT, -1, -1, -1}},
  [93] = {
    .name  = "fchown",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [94] = {
    .name  = "lchown",
    .nargs = 3,
    .args  = {ARG_STR, ARG_INT, ARG_INT, -1, -1, -1}},
  [95] = {
    .name  = "umask",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [96] = {
    .name  = "gettimeofday",
    .nargs = 2,
    .args  = {ARG_PTR, ARG_PTR, -1, -1, -1, -1}},
  [97] = {
    .name  = "getrlimit",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [98] = {
    .name  = "getrusage",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [99] = {
    .name  = "sysinfo",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [100] = {
    .name  = "times",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [101] = {
    .name  = "ptrace",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1, -1}},
  [102] = {
    .name  = "getuid",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [103] = {
    .name  = "syslog",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [104] = {
    .name  = "getgid",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [105] = {
    .name  = "setuid",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [106] = {
    .name  = "setgid",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [107] = {
    .name  = "geteuid",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [108] = {
    .name  = "getegid",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [109] = {
    .name  = "setpgid",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [110] = {
    .name  = "getppid",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [111] = {
    .name  = "getpgrp",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [112] = {
    .name  = "setsid",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [113] = {
    .name  = "setreuid",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [114] = {
    .name  = "setregid",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [115] = {
    .name  = "getgroups",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [116] = {
    .name  = "setgroups",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [117] = {
    .name  = "setresuid",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [118] = {
    .name  = "getresuid",
    .nargs = 3,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [119] = {
    .name  = "setresgid",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [120] = {
    .name  = "getresgid",
    .nargs = 3,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [121] = {
    .name  = "getpgid",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [122] = {
    .name  = "setfsuid",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [123] = {
    .name  = "setfsgid",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [124] = {
    .name  = "getsid",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [125] = {
    .name  = "capget",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [126] = {
    .name  = "capset",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [127] = {
    .name  = "rt_sigpending",
    .nargs = 2,
    .args  = {ARG_PTR, ARG_INT, -1, -1, -1, -1}},
  [128] = {
    .name  = "rt_sigtimedwait",
    .nargs = 4,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_INT, -1, -1}},
  [129] = {
    .name  = "rt_sigqueueinfo",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [130] = {
    .name  = "rt_sigsuspend",
    .nargs = 2,
    .args  = {ARG_PTR, ARG_INT, -1, -1, -1, -1}},
  [131] = {
    .name  = "sigaltstack",
    .nargs = 2,
    .args  = {ARG_PTR, ARG_PTR, -1, -1, -1, -1}},
  [132] = {
    .name  = "utime",
    .nargs = 2,
    .args  = {ARG_STR, ARG_PTR, -1, -1, -1, -1}},
  [133] = {
    .name  = "mknod",
    .nargs = 3,
    .args  = {ARG_STR, ARG_INT, ARG_INT, -1, -1, -1}},
  [134] = {
    .name  = "uselib",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [135] = {
    .name  = "personality",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [136] = {
    .name  = "ustat",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [137] = {
    .name  = "statfs",
    .nargs = 2,
    .args  = {ARG_STR, ARG_PTR, -1, -1, -1, -1}},
  [138] = {
    .name  = "fstatfs",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [139] = {
    .name  = "sysfs",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [140] = {
    .name  = "getpriority",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [141] = {
    .name  = "setpriority",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [142] = {
    .name  = "sched_setparam",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [143] = {
    .name  = "sched_getparam",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [144] = {
    .name  = "sched_setscheduler",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [145] = {
    .name  = "sched_getscheduler",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [146] = {
    .name  = "sched_get_priority_max",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [147] = {
    .name  = "sched_get_priority_min",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [148] = {
    .name  = "sched_rr_get_interval",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [149] = {
    .name  = "mlock",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [150] = {
    .name  = "munlock",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [151] = {
    .name  = "mlockall",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [152] = {
    .name  = "munlockall",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [153] = {
    .name  = "vhangup",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [154] = {
    .name  = "modify_ldt",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [155] = {
    .name  = "pivot_root",
    .nargs = 2,
    .args  = {ARG_STR, ARG_STR, -1, -1, -1, -1}},
  [156] = {
    .name  = "_sysctl",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [157] = {
    .name  = "prctl",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1}},
  [158] = {
    .name  = "arch_prctl",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [159] = {
    .name  = "adjtimex",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [160] = {
    .name  = "setrlimit",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [161] = {
    .name  = "chroot",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [162] = {
    .name  = "sync",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [163] = {
    .name  = "acct",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [164] = {
    .name  = "settimeofday",
    .nargs = 2,
    .args  = {ARG_PTR, ARG_PTR, -1, -1, -1, -1}},
  [165] = {
    .name  = "mount",
    .nargs = 5,
    .args  = {ARG_STR, ARG_STR, ARG_STR, ARG_INT, ARG_PTR, -1}},
  [166] = {
    .name  = "umount2",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [167] = {
    .name  = "swapon",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [168] = {
    .name  = "swapoff",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [169] = {
    .name  = "reboot",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_PTR, -1, -1}},
  [170] = {
    .name  = "sethostname",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [171] = {
    .name  = "setdomainname",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [172] = {
    .name  = "iopl",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [173] = {
    .name  = "ioperm",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [174] = {
    .name  = "create_module",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [175] = {
    .name  = "init_module",
    .nargs = 3,
    .args  = {ARG_PTR, ARG_INT, ARG_STR, -1, -1, -1}},
  [176] = {
    .name  = "delete_module",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [177] = {
    .name  = "get_kernel_syms",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [178] = {
    .name  = "query_module",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [179] = {
    .name  = "quotactl",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_PTR, -1, -1}},
  [180] = {
    .name  = "nfsservctl",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [181] = {
    .name  = "getpmsg",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [182] = {
    .name  = "putpmsg",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [183] = {
    .name  = "afs_syscall",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [184] = {
    .name  = "tuxcall",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [185] = {
    .name  = "security",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [186] = {
    .name  = "gettid",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [187] = {
    .name  = "readahead",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [188] = {
    .name  = "setxattr",
    .nargs = 5,
    .args  = {ARG_STR, ARG_STR, ARG_PTR, ARG_INT, ARG_INT, -1}},
  [189] = {
    .name  = "lsetxattr",
    .nargs = 5,
    .args  = {ARG_STR, ARG_STR, ARG_PTR, ARG_INT, ARG_INT, -1}},
  [190] = {
    .name  = "fsetxattr",
    .nargs = 5,
    .args  = {ARG_INT, ARG_STR, ARG_PTR, ARG_INT, ARG_INT, -1}},
  [191] = {
    .name  = "getxattr",
    .nargs = 4,
    .args  = {ARG_STR, ARG_STR, ARG_PTR, ARG_INT, -1, -1}},
  [192] = {
    .name  = "lgetxattr",
    .nargs = 4,
    .args  = {ARG_STR, ARG_STR, ARG_PTR, ARG_INT, -1, -1}},
  [193] = {
    .name  = "fgetxattr",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_PTR, ARG_INT, -1, -1}},
  [194] = {
    .name  = "listxattr",
    .nargs = 3,
    .args  = {ARG_STR, ARG_STR, ARG_INT, -1, -1, -1}},
  [195] = {
    .name  = "llistxattr",
    .nargs = 3,
    .args  = {ARG_STR, ARG_STR, ARG_INT, -1, -1, -1}},
  [196] = {
    .name  = "flistxattr",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [197] = {
    .name  = "removexattr",
    .nargs = 2,
    .args  = {ARG_STR, ARG_STR, -1, -1, -1, -1}},
  [198] = {
    .name  = "lremovexattr",
    .nargs = 2,
    .args  = {ARG_STR, ARG_STR, -1, -1, -1, -1}},
  [199] = {
    .name  = "fremovexattr",
    .nargs = 2,
    .args  = {ARG_INT, ARG_STR, -1, -1, -1, -1}},
  [200] = {
    .name  = "tkill",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [201] = {
    .name  = "time",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [202] = {
    .name  = "futex",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, ARG_INT}},
  [203] = {
    .name  = "sched_setaffinity",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [204] = {
    .name  = "sched_getaffinity",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [205] = {
    .name  = "set_thread_area",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [206] = {
    .name  = "io_setup",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [207] = {
    .name  = "io_destroy",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [208] = {
    .name  = "io_getevents",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, -1}},
  [209] = {
    .name  = "io_submit",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [210] = {
    .name  = "io_cancel",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [211] = {
    .name  = "get_thread_area",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [212] = {
    .name  = "lookup_dcookie",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [213] = {
    .name  = "epoll_create",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [214] = {
    .name  = "epoll_ctl_old",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [215] = {
    .name  = "epoll_wait_old",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [216] = {
    .name  = "remap_file_pages",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1}},
  [217] = {
    .name  = "getdents64",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [218] = {
    .name  = "set_tid_address",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [219] = {
    .name  = "restart_syscall",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [220] = {
    .name  = "semtimedop",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_PTR, -1, -1}},
  [221] = {
    .name  = "fadvise64",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1, -1}},
  [222] = {
    .name  = "timer_create",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [223] = {
    .name  = "timer_settime",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, -1, -1}},
  [224] = {
    .name  = "timer_gettime",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [225] = {
    .name  = "timer_getoverrun",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [226] = {
    .name  = "timer_delete",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [227] = {
    .name  = "clock_settime",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [228] = {
    .name  = "clock_gettime",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [229] = {
    .name  = "clock_getres",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [230] = {
    .name  = "clock_nanosleep",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, -1, -1}},
  [231] = {
    .name  = "exit_group",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [232] = {
    .name  = "epoll_wait",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, -1, -1}},
  [233] = {
    .name  = "epoll_ctl",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_PTR, -1, -1}},
  [234] = {
    .name  = "tgkill",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [235] = {
    .name  = "utimes",
    .nargs = 2,
    .args  = {ARG_STR, ARG_PTR, -1, -1, -1, -1}},
  [236] = {
    .name  = "vserver",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [237] = {
    .name  = "mbind",
    .nargs = 6,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_PTR, ARG_INT, ARG_INT}},
  [238] = {
    .name  = "set_mempolicy",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [239] = {
    .name  = "get_mempolicy",
    .nargs = 5,
    .args  = {ARG_PTR, ARG_PTR, ARG_INT, ARG_INT, ARG_INT, -1}},
  [240] = {
    .name  = "mq_open",
    .nargs = 4,
    .args  = {ARG_STR, ARG_INT, ARG_INT, ARG_PTR, -1, -1}},
  [241] = {
    .name  = "mq_unlink",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [242] = {
    .name  = "mq_timedsend",
    .nargs = 5,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_INT, ARG_PTR, -1}},
  [243] = {
    .name  = "mq_timedreceive",
    .nargs = 5,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_PTR, ARG_PTR, -1}},
  [244] = {
    .name  = "mq_notify",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [245] = {
    .name  = "mq_getsetattr",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [246] = {
    .name  = "kexec_load",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_INT, -1, -1}},
  [247] = {
    .name  = "waitid",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_INT, ARG_PTR, -1}},
  [248] = {
    .name  = "add_key",
    .nargs = 5,
    .args  = {ARG_STR, ARG_STR, ARG_PTR, ARG_INT, ARG_INT, -1}},
  [249] = {
    .name  = "request_key",
    .nargs = 4,
    .args  = {ARG_STR, ARG_STR, ARG_STR, ARG_INT, -1, -1}},
  [250] = {
    .name  = "keyctl",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1}},
  [251] = {
    .name  = "ioprio_set",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [252] = {
    .name  = "ioprio_get",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [253] = {
    .name  = "inotify_init",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [254] = {
    .name  = "inotify_add_watch",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [255] = {
    .name  = "inotify_rm_watch",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [256] = {
    .name  = "migrate_pages",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, -1, -1}},
  [257] = {
    .name  = "openat",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_INT, -1, -1}},
  [258] = {
    .name  = "mkdirat",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [259] = {
    .name  = "mknodat",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_INT, -1, -1}},
  [260] = {
    .name  = "fchownat",
    .nargs = 5,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_INT, ARG_INT, -1}},
  [261] = {
    .name  = "futimesat",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_PTR, -1, -1, -1}},
  [262] = {
    .name  = "newfstatat",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_PTR, ARG_INT, -1, -1}},
  [263] = {
    .name  = "unlinkat",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [264] = {
    .name  = "renameat",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_STR, -1, -1}},
  [265] = {
    .name  = "linkat",
    .nargs = 5,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_STR, ARG_INT, -1}},
  [266] = {
    .name  = "symlinkat",
    .nargs = 3,
    .args  = {ARG_STR, ARG_INT, ARG_STR, -1, -1, -1}},
  [267] = {
    .name  = "readlinkat",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_STR, ARG_INT, -1, -1}},
  [268] = {
    .name  = "fchmodat",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [269] = {
    .name  = "faccessat",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [270] = {
    .name  = "pselect6",
    .nargs = 6,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [271] = {
    .name  = "ppoll",
    .nargs = 5,
    .args  = {ARG_PTR, ARG_INT, ARG_PTR, ARG_PTR, ARG_INT, -1}},
  [272] = {
    .name  = "unshare",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [273] = {
    .name  = "set_robust_list",
    .nargs = 2,
    .args  = {ARG_PTR, ARG_INT, -1, -1, -1, -1}},
  [274] = {
    .name  = "get_robust_list",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [275] = {
    .name  = "splice",
    .nargs = 6,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_PTR, ARG_INT, ARG_INT}},
  [276] = {
    .name  = "tee",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1, -1}},
  [277] = {
    .name  = "sync_file_range",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1, -1}},
  [278] = {
    .name  = "vmsplice",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, -1, -1}},
  [279] = {
    .name  = "move_pages",
    .nargs = 6,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, ARG_PTR, ARG_INT}},
  [280] = {
    .name  = "utimensat",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_PTR, ARG_INT, -1, -1}},
  [281] = {
    .name  = "epoll_pwait",
    .nargs = 6,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, ARG_PTR, ARG_INT}},
  [282] = {
    .name  = "signalfd",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [283] = {
    .name  = "timerfd_create",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [284] = {
    .name  = "eventfd",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [285] = {
    .name  = "fallocate",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1, -1}},
  [286] = {
    .name  = "timerfd_settime",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, -1, -1}},
  [287] = {
    .name  = "timerfd_gettime",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [288] = {
    .name  = "accept4",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, ARG_INT, -1, -1}},
  [289] = {
    .name  = "signalfd4",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, -1, -1}},
  [290] = {
    .name  = "eventfd2",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [291] = {
    .name  = "epoll_create1",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [292] = {
    .name  = "dup3",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [293] = {
    .name  = "pipe2",
    .nargs = 2,
    .args  = {ARG_PTR, ARG_INT, -1, -1, -1, -1}},
  [294] = {
    .name  = "inotify_init1",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [295] = {
    .name  = "preadv",
    .nargs = 5,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, ARG_INT, -1}},
  [296] = {
    .name  = "pwritev",
    .nargs = 5,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, ARG_INT, -1}},
  [297] = {
    .name  = "rt_tgsigqueueinfo",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_PTR, -1, -1}},
  [298] = {
    .name  = "perf_event_open",
    .nargs = 5,
    .args  = {ARG_PTR, ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1}},
  [299] = {
    .name  = "recvmmsg",
    .nargs = 5,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, ARG_PTR, -1}},
  [300] = {
    .name  = "fanotify_init",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [301] = {
    .name  = "fanotify_mark",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_STR, -1}},
  [302] = {
    .name  = "prlimit64",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, -1, -1}},
  [303] = {
    .name  = "name_to_handle_at",
    .nargs = 5,
    .args  = {ARG_INT, ARG_STR, ARG_PTR, ARG_PTR, ARG_INT, -1}},
  [304] = {
    .name  = "open_by_handle_at",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [305] = {
    .name  = "clock_adjtime",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [306] = {
    .name  = "syncfs",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [307] = {
    .name  = "sendmmsg",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, -1, -1}},
  [308] = {
    .name  = "setns",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [309] = {
    .name  = "getcpu",
    .nargs = 3,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [310] = {
    .name  = "process_vm_readv",
    .nargs = 6,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_PTR, ARG_INT, ARG_INT}},
  [311] = {
    .name  = "process_vm_writev",
    .nargs = 6,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_PTR, ARG_INT, ARG_INT}},
  [312] = {
    .name  = "kcmp",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1}},
  [313] = {
    .name  = "finit_module",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [314] = {
    .name  = "sched_setattr",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [315] = {
    .name  = "sched_getattr",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, -1, -1}},
  [316] = {
    .name  = "renameat2",
    .nargs = 5,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_STR, ARG_INT, -1}},
  [317] = {
    .name  = "seccomp",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_STR, -1, -1, -1}},
  [318] = {
    .name  = "getrandom",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [319] = {
    .name  = "memfd_create",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [320] = {
    .name  = "kexec_file_load",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_STR, ARG_INT, -1}},
  [321] = {
    .name  = "bpf",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [322] = {
    .name  = "execveat",
    .nargs = 5,
    .args  = {ARG_INT, ARG_STR, ARG_PTR, ARG_PTR, ARG_INT, -1}},
  [323] = {
    .name  = "userfaultfd",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [324] = {
    .name  = "membarrier",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [325] = {
    .name  = "mlock2",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [326] = {
    .name  = "copy_file_range",
    .nargs = 6,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_PTR, ARG_INT, ARG_INT}},
  [327] = {
    .name  = "preadv2",
    .nargs = 6,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, ARG_INT, ARG_INT}},
  [328] = {
    .name  = "pwritev2",
    .nargs = 6,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, ARG_INT, ARG_INT}},
  [329] = {
    .name  = "pkey_mprotect",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1, -1}},
  [330] = {
    .name  = "pkey_alloc",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [331] = {
    .name  = "pkey_free",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
};