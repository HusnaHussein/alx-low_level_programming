#include "main.h"

/**
 * main - prints all arguments received
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
