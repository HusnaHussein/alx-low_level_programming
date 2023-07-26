#include "main.h"

/**
 * *_strcat - appends the src string to the dest string
 *  overwriting the terminating null byte (\0)
 *   at the end of dest
 *   and then adds a terminating null byte
 *   @dest : Output String used
 *   @src: Input String used
 *   Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
