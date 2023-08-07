#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string used
 *
 * Return: NULL if str is NULL
 * On success, the function returns a pointer to the duplicated string
 * returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[len] = '\0';

	return (cpy);

}
