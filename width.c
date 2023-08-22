#include	"main.h"

/**
 *
 */

void	width(va_list arg, const char *format, int *len, int *i, char sign)
{
	int	n;
	int	index = 0;
	char	p[1000];

	while (format[*i] >= '0' && format[*i] <= '9' && index < 999)
	{
		p[index++] = format[*i];
		(*i)++;
	}
	p[index] = '\0';
	n = atoi(p);
	if (format[*i] != '\0')
	{
		if (sign == '-')
			case_searcher(arg, format, len, i);
		while (n != 0)
		{
			(*len) += _putchar(' ');
			n--;
		}
	}
}
