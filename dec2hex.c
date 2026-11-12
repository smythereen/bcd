/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	This file defines the following functions.
 *		dec2hex( );
 ******************************************************************************/
#include	"bcdlocal.h"

u32	dec2hex( u32 hex )
{
	u32	retval;
	u32	chunk;
	u32	mult;
	int	i;

	errno	= 0;
	retval	= 0;
	mult	= 1;
	
	for( i = 0; i < 8 && hex != 0; i++, hex /= 10, mult *= 16 ) {
		chunk = hex % 10;
		retval += ( chunk * mult );
	}
	if( hex != 0 ) errno = ERANGE;
	return( retval );
}
