/*
 * cmake-target.h.in.
 *
 * Autoconf compatibility layer for CMake.
 *
 * This header provides macros used by ClamAV that autoconf would've provided
 * with AC_CREATE_TARGET_H
 */

#ifndef TARGET_OS_TYPE
#define TARGET_OS_TYPE "Linux"
#endif

#ifndef TARGET_ARCH_TYPE
#define TARGET_ARCH_TYPE "x86_64"
#endif

#ifndef TARGET_CPU_TYPE
#define TARGET_CPU_TYPE TARGET_ARCH_TYPE
#endif
