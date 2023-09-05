#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of the file
* @text_content: NULL terminated string to add at the end of the file
*
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_open, fd_write, count;

	if (filename != NULL)
		fd_open = open(filename, O_WRONLY || O_APPEND);
	else
		return (-1);
	if (fd_open == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
		count++;
	}
	else
		return (1);
	fd_write = write(fd_open, text_content, count);
	if (fd_write == -1)
		return (-1);
	close(fd_open);
	return (1);
}
