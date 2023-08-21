#include "main.h"

/**
 * _binary - print binary
 *
 * @n: the number
 *
 * Return: length of the binary
 */

int _binary(int n)
{
	int len, i, j;
	int b[32];

	len = 0;
	i = 0;
	if (n == 0)
	{
		len += _putchar(48);
		return (len);
	}
	while (n > 0)
	{
		b[i++] = n % 2;
		n /= 2;
	}
	for (j = i - 1; j >= 0; j--)
		len += _putchar(48 + b[j]);
	return (len);
}
