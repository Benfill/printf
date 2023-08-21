#include "main.h"

/**
 * _octal_long - print octal
 *
 * @n: the number
 * @len: length
 */

void _octal_long(unsigned long int n, int *len)
{
	if (n > 7)
	{
		_octal_long(n / 8, len);
		_octal_long(n % 8, len);
	}
	else
		(*len) += _putchar(48 + n);
}

/**
 * _octal - print octal
 *
 * @n: the number
 * @len: length
 */

void _octal(unsigned int n, int *len)
{
	if (n > 7)
	{
		_octal(n / 8, len);
		_octal(n % 8, len);
	}
	else
		(*len) += _putchar(48 + n);
}
