#include "main.h"

/**
 * 
 * 
*/

int	_putstr(char *str)
{
	int	i;

	if (!str)
	{
		write(1, "(nil)", 5);
	}
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);        
	}
	return (i);
}
