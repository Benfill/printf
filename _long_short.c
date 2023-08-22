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
	int	n;
	unsigned int unsigned_n;

	if (c == 'i' || c == 'd')
	{
		if (flag == 'l')
			_putnbr_long(va_arg(args, long int), len);
		else if (flag == '+' || flag == ' ' || flag == 'h')
		{
			n = va_arg(args, int);
			if (n >= 0 && flag == '+')
				(*len) += _putchar('+');
			else if (n >= 0 && flag == ' ')
				(*len) += _putchar(' ');
			_putnbr(n, len);
		}
	}
	else if (c == 'u')
	{
		if (flag == 'l')
			_unsigned_long(va_arg(args, unsigned long), len);
		else if (flag == 'h')
			_unsigned_int(va_arg(args, unsigned int), len);
	}
	else if (c == 'o')
	{
		if (flag == 'l')
			_octal_long(va_arg(args, unsigned long), len);
		else if (flag == '#' || flag == 'h')
		{
			unsigned_n = va_arg(args, unsigned int);
			if (unsigned_n != 0 && flag == '#')
				(*len) += _putchar('0');
			_octal(unsigned_n, len);
		}
	}
	else
		_long_short_2(args, flag, c, len);
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
	unsigned int n;

	if (c == 'x')
	{
		if (flag == 'l')
			_hexadecimal_long(va_arg(args, unsigned long), len, 'x');
		else if (flag == 'h')
			_hexadecimal(va_arg(args, unsigned int), len, 'x');
		else if (flag == '#')
		{
			n = va_arg(args, unsigned int);
			if (n != 0)
				(*len) += write(1, "0x", 2);
			_hexadecimal(n, len, 'x');
		}
	}
	else if (c == 'X')
	{
		if (flag == 'l')
			_hexadecimal_long(va_arg(args, unsigned long), len, 'X');
		else if (flag == 'h')
			_hexadecimal(va_arg(args, unsigned int), len, 'X');
		else if (flag == '#')
		{
			n = va_arg(args, unsigned int);
			if (n != 0)
				(*len) += write(1, "0X", 2);
			_hexadecimal(n, len, 'X');
		}
	}
}
