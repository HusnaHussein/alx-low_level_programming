#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 * use _putchar three times
 *
 * Return: void
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			_putchar ('1');
			_putchar (b % 10 + '0');
		}
		_putchar ('\n');
	}
}
