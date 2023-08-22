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
	int	n, tmp;
	int	index = 0;
	char	p[1000];

	while (format[*i] >= '0' && format[*i] <= '9' && index < 999)
	{
		p[index++] = format[*i];
		(*i)++;
	}
	p[index] = '\0';
	n = _atoi(p);
	if (format[*i] != '\0')
	{
		tmp = (*len);
		if (sign == '-')
			case_searcher(arg, format, len, i);
		tmp = (*len) - tmp;
		n -= tmp;
		while (n != 0)
		{
			(*len) += _putchar(' ');
			n--;
		}
	}
}

/**
 * _atoi - function converts ascii to integer
 * @s: the pointer of string
 * Return: the converted integer
 */

int	_atoi(char *s)
{
	int	i;
	int	sum;
	int	digit;
	int	sign;

	i =		0;
	sum =		0;
	sign =		1;
	while (s[i] == '-' || s[i] == '+' || s[i] == ' ')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			sign = 1;
		while (s[i] >= '0' && s[i] <= '9')
		{
			if (sum > INT_MAX / 10
			|| (sum == INT_MAX / 10 && s[i] - '0' > 7))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			digit = s[i] - 48;
			sum = sum * 10 + digit;
			i++;
		}
		if (sum > 0)
			break;
		i++;
	}
	return (sum * sign);
}
