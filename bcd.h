/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	BCD Header File
 ******************************************************************************/
#ifndef	BCD_H
#define	BCD_H

#if	defined( __cplusplus )
extern	"C"	{
#endif

#include	<common.h>

/*
 *	BCD Data Types
 */


/*
 *	BCD Global Function Prototypes
 */

extern	u32	dec2hex( u32 hex );
extern	u32	hex2dec( u32 dec );

extern	uchar	bcd_digit(	uchar * bcd, int starting_digit );

extern	int	ascii2bcd(	uchar * bcd, char * ascii, int digits );
extern	char *	bcd2ascii(	char * buffer, uchar * bcd, int starting_digit, int ending_digit );

extern	u64	bcd2huge(	uchar * bcd, int starting_digit, int ending_digit );
extern	u64	huge2bcd(	uchar * bcd, int starting_digit, int ending_digit, u64 value );

extern	u64	bcd2xhuge(	uchar * bcd, int starting_digit, int ending_digit );
extern	u64	xhuge2bcd(	uchar * bcd, int starting_digit, int ending_digit, u64 value );

extern	u32	bcd2long(	uchar * bcd, int starting_digit, int ending_digit );
extern	u32	long2bcd(	uchar * bcd, int starting_digit, int ending_digit, u32 value );

extern	u32	bcd2xlong(	uchar * bcd, int starting_digit, int ending_digit );
extern	u32	xlong2bcd(	uchar * bcd, int starting_digit, int ending_digit, u32 value );

extern	u16	bcd2short(	uchar * bcd, int starting_digit, int ending_digit );
extern	u16	short2bcd(	uchar * bcd, int starting_digit, int ending_digit, u16 value );

extern	u16	bcd2xshort(	uchar * bcd, int starting_digit, int ending_digit );
extern	u16	xshort2bcd(	uchar * bcd, int starting_digit, int ending_digit, u16 value );

extern	uchar	bcd2char(	uchar * bcd, int starting_digit, int ending_digit );
extern	uchar	char2bcd(	uchar * bcd, int starting_digit, int ending_digit, uchar value );

extern	uchar	bcd2xchar(	uchar * bcd, int starting_digit, int ending_digit );
extern	uchar	xchar2bcd(	uchar * bcd, int starting_digit, int ending_digit, uchar value );

#if	defined( __cplusplus )
}
#endif

#endif
