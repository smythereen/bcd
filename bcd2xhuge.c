/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	This file defines the following functions.
 *		bcd2huge( );
 ******************************************************************************/
#include	"bcdlocal.h"

/*
 *	This Routine Reverses A BCD Huge
 */

u64	bcd2xhuge( uchar * bcd, int start, int end )
{
	u64	retval = 0;

	if( ( end -= start ) >= 0 ) {
		switch( end ) {
		default:	XDIGIT;
		case 14:	XDIGIT;
		case 13:	XDIGIT;
		case 12:	XDIGIT;
		case 11:	XDIGIT;
		case 10:	XDIGIT;
		case  9:	XDIGIT;
		case  8:	XDIGIT;
		case  7:	XDIGIT;
		case  6:	XDIGIT;
		case  5:	XDIGIT;
		case  4:	XDIGIT;
		case  3:	XDIGIT;
		case  2:	XDIGIT;
		case  1:	XDIGIT;
		case  0:	XDigit;
				break;
		}
	}
	return( retval );
}
