#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#inlcude "mainn.h"
#include <fcntl.h>

/**
* read_textfile - reads the text from a file
*
* @filename: it's thename of the input file
* @letters: the number of char the function will read
*
* Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytes_written;
ssize_t bytes_read;

if (filename == NULL)
{
return (0);
}

fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}

buffer = malloc(letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
close(fd);
free(buffer);
return (0);
}

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(fd);
free(buffer);
return (0);
}

close(fd);
free(buffer);

return (bytes_written);
}


