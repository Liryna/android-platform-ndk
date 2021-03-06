/*
 * Copyright (c) 2011-2016 CrystaX.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 *    1. Redistributions of source code must retain the above copyright notice, this list of
 *       conditions and the following disclaimer.
 *
 *    2. Redistributions in binary form must reproduce the above copyright notice, this list
 *       of conditions and the following disclaimer in the documentation and/or other materials
 *       provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY CrystaX ''AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL CrystaX OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those of the
 * authors and should not be interpreted as representing official policies, either expressed
 * or implied, of CrystaX.
 */

#ifndef __CRYSTAX_SRC_INCLUDE_CRYSTAX_MALLOC_H_FCABC6B669B44830AC681D7EAED127A2
#define __CRYSTAX_SRC_INCLUDE_CRYSTAX_MALLOC_H_FCABC6B669B44830AC681D7EAED127A2

#include <crystax/id.h>
#include <sys/cdefs.h>
#include <stddef.h> /* for size_t */

__BEGIN_DECLS

void  *crystax_calloc(size_t count, size_t size);
void   crystax_free(void *ptr);
void  *crystax_malloc(size_t size);
void  *crystax_valloc(size_t size);
void  *crystax_memalign(size_t alignment, size_t size);
size_t crystax_malloc_usable_size(void const *ptr);
int    crystax_posix_memalign(void **memptr, size_t alignment, size_t size);
void  *crystax_pvalloc(size_t size);
void  *crystax_realloc(void *ptr, size_t size);

__END_DECLS

#endif /* __CRYSTAX_SRC_INCLUDE_CRYSTAX_MALLOC_H_FCABC6B669B44830AC681D7EAED127A2 */
