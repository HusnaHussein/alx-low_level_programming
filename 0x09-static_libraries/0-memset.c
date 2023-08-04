#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @b: constant byte
 * @n: number of bytes
 * @s: target memory area
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
