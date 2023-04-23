#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void p_char(va_list arg);
void p_int(va_list arg);
void p_float(va_list arg);
void p_string(va_list arg);
void print_all(const char * const format, ...);
/**
 * p_char - Prints a char.
 * @arg: A list of args
 *
 * return: void.
 */
void p_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * p_int - Prints an int.
 * @arg: A list of arguments
 *
 * returns: void,
 */
void p_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}

/**
 * p_float - Prints a float.
 * @arg: A list of arguments
 *
 * return: void
 */
void p_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * p_string - Prints a string.
 * @arg: A list of arguments
 *
 * return: void
 */
void p_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}
/**
 * print_all - Prints anything.
 * @format: is a list of types of arguments passed to the function
 * @...: A variable number of arguments
 *
 * return: Void.
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i = 0, j = 0;

	print func[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string}
	};

	va_start(args, format);
	while (format && format[i])
	{
		while (format != *func.symb[j] && j < 4)
			j++;
		if (format == *func.symb[j] && j < 4)
		{
			printf("%s", separator);
			func[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
