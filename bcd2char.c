/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	This file defines the following functions.
 *		bcd2char( );
 ******************************************************************************/
#include	"bcdlocal.h"

uchar	bcd2char( uchar * bcd, int start, int end )
{
	uchar	retval = 0;

	if( ( end -= start ) >= 0 ) {
		switch( end ) {
					// 0xFF     =     255 base 10
					// 2 full digits  ?21
		default:	DIGIT;
		case 0:		Digit;

				break;
		}
	}
	return( retval );
}
