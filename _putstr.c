#include "main.h"

/**
 *
 *
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
			if (0 < str[i] && str[i] < 32 || str[i] >= 127)
			{
				len += write(1, "\\x", 2);
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
