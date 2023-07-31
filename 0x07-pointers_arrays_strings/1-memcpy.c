#include "main.h"

/**
 * *_memcpy - copies memory area
 * @n: number of bytes
 * @src: source memory area
 * @dest: destination memory area
 * Return: destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n -= 1;
	}

	return (dest);
}
