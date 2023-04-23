#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct printer - structure to selct right function
 * @symb: sypbole to selct the datatype
 * @print: A function pointer that prints the right data type
 */
typedef struct printer
{
	char *symb;
	void (*print)(va_list args);
} print;

#endif
