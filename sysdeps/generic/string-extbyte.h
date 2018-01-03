/* string-extbyte.h -- function memory order byte extract.  Generic C version.
   Copyright (C) 2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef STRING_EXTBYTE_H
#define STRING_EXTBYTE_H 1

#include <limits.h>
#include <endian.h>
#include <string-optype.h>

static inline unsigned char
extractbyte (op_t x, unsigned idx)
{
  if (__BYTE_ORDER == __LITTLE_ENDIAN)
    return x >> (idx * CHAR_BIT);
  else
    return x >> (sizeof (x) - 1 - idx) * CHAR_BIT;
}

#endif /* STRING_EXTBYTE_H */
