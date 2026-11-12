/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	This file defines the following functions.
 *		xlong2bcd( );
 ******************************************************************************/
#include	"bcdlocal.h"

u32	xlong2bcd( uchar * bcd, int start, int end, u32 value )
{
	for( ; end >= start; end-- ) {
		bcd[ end >> 1 ] &= ( ( end & 1 ) != 0 ? 0x0F : 0xF0 );	/* Zero Old BCD Digit */
		bcd[ end >> 1 ] |= ( ( value & 0x0F ) << ( ( end & 1 ) != 0 ? 4 : 0 ) );
		value >>= 4;
	}
	return( value ); /* "== 0" is success, "!= 0" is entire # not converted */
}
