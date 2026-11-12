/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	This file defines the following functions.
 *		bcd2xshort( );
 ******************************************************************************/
#include	"bcdlocal.h"

/*
 *	This Routine Reverses A BCD Short
 */

u16	bcd2xshort( uchar * bcd, int start, int end )
{
	u16	retval = 0;

	if( ( end -= start ) >= 0 ) {
		switch( end ) {
		default:	XDIGIT;
		case 2:		XDIGIT;
		case 1:		XDIGIT;
		case 0:		XDigit;
				break;
		}
	}
	return( retval );
}
