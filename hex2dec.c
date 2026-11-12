/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	This file defines the following functions.
 *		hex2dec( );
 ******************************************************************************/
#include	"bcdlocal.h"

u32	hex2dec( u32 dec )
{
	u32	retval;
	u32	chunk;
	u32	mult;
	int	i;

	errno	= 0;
	retval	= 0;
	mult	= 1;
	for( i = 0 ; i < 8 ; i++, mult *= 10, dec >>= 4 ) {
		chunk = ( dec &  0x0F );
		if( chunk <= 9 ) {
			retval += ( chunk * mult );
			continue;
		}
		errno = ERANGE;
	}
	return( retval );
}
