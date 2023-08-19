#include "main.h"

/**
 *
 *
 */

void _unsigned(unsigned int n, int *len)
{
    if (n > 9)
    {
        _unsigned(n / 10, len);
        _unsigned(n % 10, len);
    }
    else
        (*len) += _putchar(48 + n);
}