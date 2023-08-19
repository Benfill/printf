#include "main.h"

/**
 * _putptr - print pointer address
 *
 * @ptr: ponter address
 *
 * Return: Length of the pointer
*/
int _putptr(void *ptr)
{
	unsigned long address = (unsigned long) ptr;
	char buffer[20];
	int index = sizeof(buffer) - 1;
	unsigned int length = 0;

	buffer[index] = '\0';
	index--;

	do {
		char digit = address % 16;

		if (digit < 10)
		{
			buffer[index] = '0' + digit;
		} else
		{
			buffer[index] = 'a' + (digit - 10);
		}

		address /= 16;
		index--;
		length++;
	} while (address != 0);

	buffer[index--] = 'x';
	buffer[index] = '0';

	write(STDOUT_FILENO, &buffer[index], sizeof(buffer) - 1 - index);
	return (length + 2);
}
