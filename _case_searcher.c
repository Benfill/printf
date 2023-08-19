#include "main.h"

/**
 * case_searcher - function searches for the next char after %
 * @p: next argument
 * @c: character to be checked
 * @len: pointer to the length counter
 */

void	case_searcher(va_list p, char c, int *len)
{
	switch (c)
	{
		case 'c':
			(*len) += _putchar(va_arg(p, int));
			break;
		case 's':
			(*len) += _putstr(va_arg(p, char *), 's');
			break;
		case '%':
			(*len) += _putchar('%');
			break;
		case 'd':
			_putnbr(va_arg(p, int), len);
			break;

		case 'i':
			_putnbr(va_arg(p, int), len);
			break;
		case 'b':
			(*len) += _binary(va_arg(p, int));
			break;
		case 'u':
			_unsigned_int(va_arg(p, unsigned int), len);
			break;
		case 'o':
			_octal(va_arg(p, unsigned int), len);
			break;
		case 'x':
			_hexadecimal(va_arg(p, unsigned int), len, 'x');
			break;
		default:
			case_searcher_2(p, c, len);
	}
}

/**
 * case_searcher_2 - function searches for the next char after %
 * @p: next argument
 * @c: character to be checked
 * @len: pointer to the length counter
 */

void	case_searcher_2(va_list p, char c, int *len)
{
	void	*ptr;

	switch (c)
	{

		case 'X':
			_hexadecimal(va_arg(p, unsigned int), len, 'X');
			break;

		case 'S':
			(*len) += _putstr(va_arg(p, char *), 'S');
			break;

		case 'p':
			ptr = va_arg(p, void *);
			if (ptr == ((void *)0))
				(*len) += _putstr("(nil)", 's');
			else
				(*len) += _putptr(ptr);
			break;
		case 'r':
			(*len) += _reverse(va_arg(p, char *));
			break;
		default:
			if (c != '\0')
				(*len) += _putchar(c);
			break;
	}
}
