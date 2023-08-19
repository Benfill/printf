#ifndef _PRINTF
#define _PRINTF
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#define BUFFER_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
void case_searcher(va_list, char, int*);
void case_searcher_2(va_list, char, int*);
int _putstr(char *str, char case_s);
int _binary(int n);
void _putnbr(int n, int *len);
void _unsigned_int(unsigned int n, int *len);
void _octal(unsigned int n, int *len);
void _hexadecimal(unsigned int n, int *len, char case_x);
int _putptr(void *ptr);

#endif

