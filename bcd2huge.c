/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	This file defines the following functions.
 *		bcd2huge( );
 ******************************************************************************/
#include	"bcdlocal.h"

u64	bcd2huge( uchar * bcd, int start, int end )
{
	u64	retval = 0;

	if( ( end -= start ) >= 0 ) {
		switch( end ) {
				// 0xFFFFFFFFffffffff = 18,446,744,073,709,551,615 base 10
				// 19 full digits       ?9,876,543,210,987,654,321
		default:	DIGIT;

		case 17:	DIGIT;
		case 16:	DIGIT;
		case 15:	DIGIT;

		case 14:	DIGIT;
		case 13:	DIGIT;
		case 12:	DIGIT;

		case 11:	DIGIT;
		case 10:	DIGIT;
		case  9:	DIGIT;

		case  8:	DIGIT;
		case  7:	DIGIT;
		case  6:	DIGIT;

		case  5:	DIGIT;
		case  4:	DIGIT;
		case  3:	DIGIT;

		case  2:	DIGIT;
		case  1:	DIGIT;
		case  0:	Digit;

				break;
		}
	}
	return( retval );
}
