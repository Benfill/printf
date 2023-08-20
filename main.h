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
void case_searcher(va_list, const char *, int *, int *);
void case_searcher_2(va_list, const char *, int *, int *);
void _case_searcher_3(va_list, const char *, int *, int *);
int _putstr(char *str, char case_s);
int _binary(int n);
void _putnbr(int n, int *len);
void _unsigned_int(unsigned int n, int *len);
void _octal(unsigned int n, int *len);
void _hexadecimal(unsigned int n, int *len, char case_x);
int _putptr(void *ptr);
int _reverse(char *str);
void rot13(char *str, int*);
void _long_short(va_list args, char flag, char c, int *len);
void _long_short_2(va_list args, char flag, char c, int *len);
#endif
