#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdbool.h>
/**
 * print_all - Function that prints anything
 *
 * @format: This is the format to print a value
 *
 */
void print_all(const char * const format, ...)
{
	va_list pa;
	char *s;
	int i;

	i = 0;
	va_start(pa, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(pa, int));
				break;
			case 'f':
				printf("%f", va_arg(pa, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(pa, int));
				break;
			case 's':
				s = va_arg(pa, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(pa);
}
