#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"
#include <unistd.h>
/**
 * append_text_to_file - append the text input into an existing file
 *
 * @filename: name of the file
 * @text_content: content to be added
 *
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{

int fd;
ssize_t bytes_written;

if (filename == NULL)
{
return (-1);
}

if (text_content == NULL)
{
return (1);
}

fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);

if (fd == -1)
{
return (-1);
}

bytes_written = write(fd, text_content, strlen(text_content));

if (bytes_written == -1 || (size_t)bytes_written != strlen(text_content))
{
close(fd);
return (1);
}

close(fd);
return (1);
}

