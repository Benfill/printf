#include "main.h"

/**
 * _strlen - function counts length of a string
 * @str: string to be counted
 * Return: length of str
 */
int	_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * _reverse - prints str in reverse
 * @str: the string to be reversed
 * Return: lenght of the str
 */

int	_reverse(char *str)
{
	char	*ptr;
	int	i;
	int	j;

	if (!str)
		return (_putstr("(null)", 's'));
	i = _strlen(str);
	ptr = malloc(i + 1);
	if (!ptr)
		return (-1);
	for (j = 0; j <= i; j++)
		ptr[j] = str[i - j - 1];
	ptr[j] = '\0';
	return (_putstr(ptr, 's'));
}
