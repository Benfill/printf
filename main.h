#ifndef     _PRINTF
#define     _PRINTF
#include    <stdio.h>
#include    <unistd.h>
#include    <stdlib.h>
#include    <stdarg.h>

int     _putchar(char c);
int     _printf(const char *format, ...);
int     _putstr(char *str);

#endif