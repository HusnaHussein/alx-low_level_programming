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
	unasigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
