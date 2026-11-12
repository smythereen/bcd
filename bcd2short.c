/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	This file defines the following functions.
 *		bcd2short( );
 ******************************************************************************/
#include	"bcdlocal.h"

u16	bcd2short( uchar * bcd, int start, int end )
{
	u16	retval = 0;

	if( ( end -= start ) >= 0 ) {
		switch( end ) {
					// 0xFFFF    =    65,535 base 10
					// 4 full digits  ?4,321
		default:	DIGIT;

		case 2:		DIGIT;
		case 1:		DIGIT;
		case 0:		Digit;

				break;
		}
	}
	return( retval );
}
