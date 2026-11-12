/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	This file defines the following functions.
 *		bcd2long( );
 ******************************************************************************/
#include	"bcdlocal.h"

u32	bcd2long( uchar * bcd, int start, int end )
{
	u32	retval = 0;

	if( ( end -= start ) >= 0 ) {
		switch( end ) {
					// 0xFFFFFFFF  =  4,294,967,295 base 10
					// 9 full digits  ?,987,654,321
		default:	DIGIT;
		case 7:		DIGIT;
		case 6:		DIGIT;

		case 5:		DIGIT;
		case 4:		DIGIT;
		case 3:		DIGIT;

		case 2:		DIGIT;
		case 1:		DIGIT;
		case 0:		Digit;

				break;
		}
	}
	return( retval );
}
