/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	This file defines the following functions.
 *		bcd2ascii( );
 ******************************************************************************/
#include	"bcdlocal.h"

/*
 *	start=0, end=9 Will Decode 10 BCD Digits ( 5 bytes )
 */

char *	bcd2ascii( char * buffer, uchar * bcd, int start, int end )
{
	char *	bp;

	for( bp = buffer; start <= end; start++, bp++ ) {
		*bp = "0123456789ABCDEF"[ bcd_digit( bcd, start ) ];
	}
	*bp = 0;
	return( buffer );
}
