/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	BCD Routines
 *
 *	This file defines local structures, variables, and routines
 *	need for BCD functions.
 ******************************************************************************/
#ifndef	BCDLOCAL_H
#define	BCDLOCAL_H

#if	defined( __cplusplus )
extern	"C"	{
#endif

#include	<common.h>
#include	<bcd.h>

#define	XDIGIT	retval |= (uchar)( ( bcd[start>>1] >> ( (start&1) ? 4 : 0 ) ) & 0x0F ); retval <<= 4; start++
#define	XDigit	retval |= (uchar)( ( bcd[start>>1] >> ( (start&1) ? 4 : 0 ) ) & 0x0F )

#define	DIGIT	retval += (uchar)( ( bcd[start>>1] >> ( (start&1) ? 4 : 0 ) ) & 0x0F ); retval *= 10; start++
#define	Digit	retval += (uchar)( ( bcd[start>>1] >> ( (start&1) ? 4 : 0 ) ) & 0x0F )

#if	defined( __cplusplus )
}
#endif

#endif
