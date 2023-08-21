#include "main.h"

/**
 * _unsigned_long - print the unsigned
 *
 * @n: number
 * @len: length
 */

void _unsigned_long(unsigned long int n, int *len)
{
	if (n > 9)
	{
		_unsigned_long(n / 10, len);
		_unsigned_long(n % 10, len);
	}
	else
		(*len) += _putchar(48 + n);
}

/**
 * _unsigned_int - print the unsigned
 *
 * @n: number
 * @len: length
 */

void _unsigned_int(unsigned int n, int *len)
{
	if (n > 9)
	{
		_unsigned_int(n / 10, len);
		_unsigned_int(n % 10, len);
	}
	else
		(*len) += _putchar(48 + n);
}
