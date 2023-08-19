#include "main.h"

/**
 * _hexadecimal - print the hexadecimal
 *
 * @n: the number
 * @len: length
 * @case_x: case_x
 *
 * Return: Void
 */

void _hexadecimal(unsigned int n, int *len, char case_x)
{
	if (n >= 16)
	{
		_hexadecimal(n / 16, len, case_x);
		_hexadecimal(n % 16, len, case_x);
	}
	else
	{
		if (n <= 9)
			(*len) += _putchar(48 + n);
		else
		{
			if (case_x == 'x')
				(*len) += _putchar(87 + n);
			else
				(*len) += _putchar(55 + n);
		}
	}
}