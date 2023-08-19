#ifndef _PRINTF
#define _PRINTF
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _putstr(char *str, char case_s);
int _binary(int n);
void _putnbr(int n, int *len);
void _unsigned(unsigned n, int *len);
void _octal(unsigned int n, int *len);
void _hexadecimal(unsigned int n, int *len, char case_x);

#endif