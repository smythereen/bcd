/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
/* Copyright (c) 2007-2026 John R. Smythe Jr. */
/*******************************************************************************
 * 
 *	Program To Verify BCD Library Functions
 ******************************************************************************/
#include	"bcdlocal.h"

static	void	hex_to_dec( int ac, char *av[ ] )
{
	u32	val;
	u32	rval;
	val = strtoul( av[ 0 ], 0, 0 );
	rval = hex2dec( val );
	printf( "hex2dec( Ox%08X( %u ) ) = %u( 0x%08X ) errno = %u\n", val, val, rval, rval, errno ); 
	exit( 0 );
}

static	void	dec_to_hex( int ac, char *av[ ] )
{
	u32	val;
	u32	rval;
	val = strtoul( av[ 0 ], 0, 0 );
	rval = dec2hex( val );
	printf( "dec2hex( %u( 0x%08X ) ) = 0x%08X( %u ) errno = %u\n", val, val, rval, rval, errno ); 
	exit( 0 );
}

static	struct	list_s	{
	char *	cmd;
	void (*func)( int ac, char *av[ ] );
}	list[ ]	=	{
	{	"dec2hex",		dec_to_hex	},
	{	"hex2dec",		hex_to_dec	},
	{	(char *)0,		(void (*)( int, char *[ ] ))0	}
};

static	void	usage( char * av[ ] )
{
	fprintf( stderr,
		 "\n\tBCD Routines - Verification Program\n\n"
		 "Usage:\n"
		 "\t%s\t d[ec2hex]    decimal_or_hex_number\n"
		 "\t\t h[ex2dec]    hex_or_decimal_number\n"
		 "\n",
		 av[ 0 ]
	);
	fflush( stderr );
	exit( 1 );
}

int	main( int ac, char * av[ ] )
{
struct	list_s	*	l;
	int		len;

	LocalName = av[ 0 ];
	switch( ac ) {
	default:	len = strlen( av[ 1 ] );
			for( l = list; l->cmd != (char *)0; l++ ) {
				if( strncmp( av[ 1 ], l->cmd, len ) ) continue;
				l->func( ( ac - 2 ), &av[ 2 ] );
				break;
			}
	case  1:
	case  0:	usage( av );
	}
	exit( 0 );
}
