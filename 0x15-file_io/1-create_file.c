#include "main.h"

/**
* create_file - creates a file
* @filename: name of the file to create
* @text_content: NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd_open, fd_write;
	int count = 0;

	if (filename == NULL)
		return (-1);
	fd_open = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd_open == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
		count++;
	}
	else
	{
		close(fd_open);
		return (1);
	}
	fd_write = write(fd_open, text_content, count);
	if (fd_write != count || fd_write == -1)
		return (-1);
	close(fd_open);
	return (1);
}
