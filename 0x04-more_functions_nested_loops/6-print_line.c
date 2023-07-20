#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * only use _putchar function to print
 * @n: is the number of times the character _ should be printed
 * line should end with a \n
 * If n is 0 or less, the function should only print \n
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar ('_');
	}
	_putchar ('\n');
}
