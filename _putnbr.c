#include "main.h"

/**
 * _putnbr_long - print nbr
 *
 * @n: number
 * @len: length
 */

void _putnbr_long(long int n, int *len)
{
	if (n < 0)
	{
		(*len) += _putchar('-');
		n = -n;
		_putnbr_long(n, len);
		return;
	}
	else if (n > 9)
	{
		_putnbr_long(n / 10, len);
		_putnbr_long(n % 10, len);
	}
	else
		(*len) += _putchar(48 + n);
}

/**
 * _putnbr - print nbr
 *
 * @n: number
 * @len: length
 */

void _putnbr(int n, int *len)
{
	if (n == -2147483648)
	{
		(*len) += _putchar('-');
		(*len) += _putchar('2');
		_putnbr(147483648, len);
		return;
	}
	if (n < 0)
	{
		(*len) += _putchar('-');
		n = -n;
		_putnbr(n, len);
		return;
	}
	else if (n > 9)
	{
		_putnbr(n / 10, len);
		_putnbr(n % 10, len);
	}
	else
		(*len) += _putchar(48 + n);
}
