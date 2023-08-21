#include "main.h"

/**
 * _printf - printf implementation
 *
 * @format: the format
 *
 * Return: length of printed value
 */

int _printf(const char *format, ...)
{
	int i, len;
	va_list p;

	if (!format)
		return (0);

	len = 0;
	va_start(p, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			case_searcher(p, format, &len, &i);
		}
		else
			len += _putchar(format[i]);
	}
	va_end(p);
	return (len);
}
