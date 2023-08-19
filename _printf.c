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
	void *ptr;

	len = 0;
	va_start(p, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				len += _putchar(va_arg(p, int));
				break;

			case 's':
				len += _putstr(va_arg(p, char *), 's');
				break;

			case '%':
				len += _putchar('%');
				break;

			case 'd':
				_putnbr(va_arg(p, int), &len);
				break;

			case 'i':
				_putnbr(va_arg(p, int), &len);
				break;

			case 'b':
				len += _binary(va_arg(p, int));
				break;

			case 'u':
				_unsigned(va_arg(p, unsigned int ), &len);
				break;

			case 'o':
				_octal(va_arg(p, unsigned int ), &len);
				break;

			case 'x':
				_hexadecimal(va_arg(p, unsigned int), &len, 'x');
				break;

			case 'X':
				_hexadecimal(va_arg(p, unsigned int), &len, 'X');
				break;

			case 'S':
				len += _putstr(va_arg(p, char *), 'S');
				break;

			case 'p':
				ptr = va_arg(p, void *);
				if (ptr == ((void *)0))
					len += _putstr("(nil)", 's');
				else
					len += _putptr(ptr);
				break;
			default:
				len += _putchar(format[i]);
				break;
			}
		}
		else
			len += _putchar(format[i]);
	}
	va_end(p);
	return (len);
}
