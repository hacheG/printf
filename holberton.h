#ifndef _holberton_h
#define _holberton_h

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct op - flag / function object
 * @c: flag
 * @f: function
 */

typedef struct op
{
	char *c;
	int (*f)(va_list);
} op_t;

int _putchar(char c);
int _printChar(va_list values);
int _printString(va_list values);
int _printDec(va_list values);
int _printInt(va_list ar_numlist);
int (*get_func(char s))(va_list values);
int _printf(const char *format, ...);
#endif
