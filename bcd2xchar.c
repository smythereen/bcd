/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	This file defines the following functions.
 *		bcd2xchar( );
 ******************************************************************************/
#include	"bcdlocal.h"

/*
 *	This Routine Reverses A BCD Byte
 */
uchar	bcd2xchar( uchar * bcd, int start, int end )
{
	uchar	retval = 0;

	if( ( end -= start ) >= 0 ) {
		switch( end ) {
		default:	XDIGIT;
		case 0:		XDigit;
				break;
		}
	}
	return( retval );
}
