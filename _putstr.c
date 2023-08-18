#include "main.h"

/**
 * 
 * 
*/

int	_putstr(char *str)
{
	int	i;

	if (!str)
		return (write(1, "(null)", 6));
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
