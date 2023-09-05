#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of the file
* @letters: number of letters to read and print
*
* Return: number of letter read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd_open;
	ssize_t fd_read, fd_write;

	if (filename == NULL)
		return (0);
	fd_open = open(filename, O_RDONLY);
	if (fd_open == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	fd_read = read(fd_open, buffer, letters);
	if (fd_read == -1)
	{
		free(buffer);
		return (0);
	}
	fd_write = write(STDOUT_FILENO, buffer, fd_read);
	if (fd_write == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd_open);
	free(buffer);
	return (fd_write);
}
