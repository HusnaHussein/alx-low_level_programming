#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	unsigned int i;

	va_start(pn, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pn, const unsigned int));
		if (separator != NULL && n != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(pn);
}
