#include	"main.h"

/**
 * width - function counts the width
 * @arg: pointer to args
 * @format: the fixed string in printf
 * @len: pointer to length counter
 * @i: format's index
 * @sign: checker if the spaces should be before or after arg
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
