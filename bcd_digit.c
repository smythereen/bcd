/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	This file defines the following functions.
 *		bcd_digit( );
 ******************************************************************************/
#include	"bcdlocal.h"

uchar	bcd_digit( uchar * bcd, int start )
{
	return( (uchar)( ( bcd[ start >> 1 ] >> ( ( start & 1 ) ? 4 : 0 ) ) & 0x0F ) );
}

