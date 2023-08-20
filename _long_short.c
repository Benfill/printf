#include "main.h"

/**
 * _long_short - long and short
 *
 * @args: args
 * @flag: flag
 * @c: c
 * @len: len
*/
void _long_short(va_list args, char flag, char c, int *len)
{
	if (c == 'i' || c == 'd')
	{
		if (flag == 'l')
		{
			long int n = va_arg(args, long int);

			_putnbr(n, len);
		} else if (flag == 'h')
		{
			short int n = va_arg(args, int);

			_putnbr(n, len);
		}
	} else if (c == 'u')
	{
		if (flag == 'l')
		{
			unsigned long int n = va_arg(args, unsigned long);

			_unsigned_int(n, len);
		} else if (flag == 'h')
		{
			unsigned short int n = (unsigned short int)va_arg(args, unsigned int);

			_unsigned_int(n, len);
		}
	} else if (flag == 'o')
	{
		if (flag == 'l')
		{
			unsigned long int n = va_arg(args, unsigned long);

			_octal(n, len);
		} else if (flag == 'h')
		{
			unsigned short int n = (unsigned short)va_arg(args, unsigned int);

			_octal(n, len);
		}
	}
}

/**
 * _long_short_2 - long and short
 *
 * @args: args
 * @flag: flag
 * @c: c
 * @len: len
*/

void _long_short_2(va_list args, char flag, char c, int *len)
{
	if (c == 'x')
	{
		if (flag == 'l')
		{
			unsigned long int n = va_arg(args, unsigned long);

			_hexadecimal(n, len, 'x');
		} else if (flag == 'h')
		{
			unsigned short int n = (unsigned short)va_arg(args, unsigned int);

			_hexadecimal(n, len, 'x');
		}
	} else if (c == 'X')
	{
		if (flag == 'l')
		{
			unsigned long int n = va_arg(args, unsigned long);

			_hexadecimal(n, len, 'X');
		} else if (flag == 'h')
		{
			unsigned short int n = (unsigned short)va_arg(args, unsigned int);

			_hexadecimal(n, len, 'X');
		}
	}
}
