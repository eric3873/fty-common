/*  =========================================================================
    fty_common_classes - private header file

    Copyright (C) 2014 - 2018 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_COMMON_CLASSES_H_INCLUDED
#define FTY_COMMON_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/fty_common.h"

//  Extra headers

//  Opaque class structures to allow forward references

//  Internal API
// common definitions and idioms from czmq_prelude.h, which are used in generated code
#if ! defined(__CZMQ_PRELUDE_H_INCLUDED__)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

#define streq(s1,s2)    (!strcmp ((s1), (s2)))
#define strneq(s1,s2)   (strcmp ((s1), (s2)))
//  Replacement for malloc() which asserts if we run out of heap, and
//  which zeroes the allocated block.
static inline void *
safe_malloc (size_t size, const char *file, unsigned line)
{
//     printf ("%s:%u %08d\n", file, line, (int) size);
    void *mem = calloc (1, size);
    if (mem == NULL) {
        fprintf (stderr, "FATAL ERROR at %s:%u\n", file, line);
        fprintf (stderr, "OUT OF MEMORY (malloc returned NULL)\n");
        fflush (stderr);
        abort ();
    }
    return mem;
}

//  Define _ZMALLOC_DEBUG if you need to trace memory leaks using e.g. mtrace,
//  otherwise all allocations will claim to come from czmq_prelude.h. For best
//  results, compile all classes so you see dangling object allocations.
//  _ZMALLOC_PEDANTIC does the same thing, but its intention is to propagate
//  out of memory condition back up the call stack.
#if defined (_ZMALLOC_DEBUG) || defined (_ZMALLOC_PEDANTIC)
#   define zmalloc(size) calloc(1,(size))
#else
#   define zmalloc(size) safe_malloc((size), __FILE__, __LINE__)
#endif
#endif // __CZMQ_PRELUDE_H_INCLUDED__



//  *** To avoid double-definitions, only define if building without draft ***
#ifndef FTY_COMMON_BUILD_DRAFT_API

//  Self test for private classes
FTY_COMMON_PRIVATE void
    fty_common_private_selftest (bool verbose, const char *subtest);

#endif // FTY_COMMON_BUILD_DRAFT_API

#endif
