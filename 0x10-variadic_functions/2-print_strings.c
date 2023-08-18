#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 * Return: strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ps;
	unsigned int i;

	va_start(ps, n);
	for (i = 0; i < n; i++)
	{
		char *s;

		s = va_arg(ps, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ps);
}
