#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * only use _putchar function to print
 * @size: is the size of the triangle
 * If size is 0 or less,
 *  the function should print only a new line
 *  Use the character # to print the triangle
 *
 *  Return: void
 */

void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
