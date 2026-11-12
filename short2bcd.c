/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	This file defines the following functions.
 *		short2bcd( );
 ******************************************************************************/
#include	"bcdlocal.h"

u16	short2bcd( uchar * bcd, int start, int end, u16 value )
{
	for( ; end >= start; end-- ) {
		bcd[ end >> 1 ] &= ( ( end & 1 ) != 0 ? 0x0F : 0xF0 );	/* Zero Old BCD Digit */
		bcd[ end >> 1 ] |= ( ( value % 10 ) << ( ( end & 1 ) != 0 ? 4 : 0 ) );
		value /= 10;
	}
	return( value ); /* "== 0" is success, "!= 0" is entire # not converted */
}
