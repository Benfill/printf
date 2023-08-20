#include "main.h"

/**
 * rot13 - function encodes a string to rot13
 * @str: the string to be changed
 * @len: format's length
 */

void rot13(char *str, int *len)
{
	int i;
	int j;
	char rot[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char swap[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (!str)
		(*len) += (write(1, "(null)", 6));
	i = 0;
	j = 0;
	while (str[i])
	{
		while (j <= 53)
		{
			if (str[i] == rot[j])
			{
				(*len) += _putchar(swap[j]);
				break;
			}
			j++;
		}
		if (!rot[j]){
			(*len) += _putchar(str[i]);
		}
		j = 0;
		i++;
	}
}
