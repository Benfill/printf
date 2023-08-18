#include    "main.h"

/**
 * 
 * 
*/

int     _printf(const char *format, ...)
{
	int     i, len;
	va_list p;

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
					len += _putstr(va_arg(p, char *));
					break;

				case '%':
					len += _putchar('%');
					break;

				default:
					break;
			}
		}
        else
            len += _putchar(format[i]);
	}
	va_end(p);
	return (len);
}
