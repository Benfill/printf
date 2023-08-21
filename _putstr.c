#include "main.h"

/**
 * _putstr - print string
 *
 * @str: the string
 * @case_s: case s
 *
 * Return: Length
 */

int _putstr(char *str, char case_s)
{
	int i, len;

	len = 0;
	if (!str)
		return (write(1, "(null)", 6));
	for (i = 0; str[i]; i++)
	{
		if (case_s == 'S')
		{
			if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
			{
				len += write(1, "\\x", 2);
				if (str[i] < 16)
					len += _putchar('0');
				_hexadecimal(str[i], &len, 'X');
			}
			else
				len += _putchar(str[i]);
		}
		else
			len += _putchar(str[i]);
	}
	return (len);
}
