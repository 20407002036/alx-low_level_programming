#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
#include <unistd.h>

/**
* create_file - create a file
*
* @filename: filename of the file
* @text_content: the contents of the file
*
* Return: int
*/
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;


if (filename == NULL)
{
return (-1);
}

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

if (fd == -1)
{
return (-1);
}

if (text_content != NULL)
{
bytes_written = write(fd, text_content, strlen(text_content));

if (bytes_written == -1 || (size_t)bytes_written != strlen(text_content))
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}

