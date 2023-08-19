#include "main.h"

/**
 *
 *
 */

void _octal(unsigned int n, int *len)
{
    if (n > 7)
    {
        _octal(n / 8, len);
        _octal(n % 8, len);
    }
    else
        (*len) += _putchar(48 + n);
}