#include "main.h"

/**
 *
 *
 */

void _putnbr(int n, int *len)
{
    if (n == -2147483648)
        (* len) += write(1, "-2147483648", 11);
    else if (n < 0)
    {
        (* len) += _putchar('-');
        _putnbr(-n, len);
    }
    else if (n > 9)
    {
        _putnbr(n / 10, len);
        _putnbr(n % 10, len);
    }
    else
        (* len) += _putchar(48 + n);
}