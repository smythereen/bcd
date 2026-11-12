/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	This file defines the following functions.
 *		ascii2bcd( );
 ******************************************************************************/
#include	"common.h"

int	ascii2bcd( uchar * bcd, char * ascii, int digits )
{
	int	i;
	uchar	c;

	if( bcd == NULL || ascii == NULL ) return( 0 );
	if( digits < 0 ) digits = strlen( ascii );

	memset( bcd, 0, ((digits + 1) >> 1) );
	for( i = 0; i < digits; i++ ) {
		c = (uchar)ascii[ i ];
		if( c >= 'A' && c <= 'F' ) {
			c -= 'A';
			c += 10;
		} else if( c >= 'a' && c <= 'f' ) {
			c -= 'a';
			c += 10;
		} else if( ascii[ i ] < '0' || ascii[ i ] > '9' ) {
			break;
		}
		if( ( i & 1 ) != 0 ) {
			bcd[ i >> 1 ] |= (uchar)( ( c & 0x0F ) << 4 );
		} else {
			bcd[ i >> 1 ] = 0;
			bcd[ i >> 1 ] |= (uchar)( ( c & 0x0F ) );
		}
	}
	return( ( ( i + 1 ) >> 1 ) );
}
