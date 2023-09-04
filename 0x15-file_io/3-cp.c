#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024
/**
 * print_error_and_exit - prints
 *
 * @exit_code: code
 * @message: message of the error
 *
 * Return: void
 */
void print_error_and_exit(int exit_code, const char *message)
{
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(exit_code);
}

int main(int argc, char *argv[])
{
  const char *file_from;
  const char *file_to;
  int fd_from;
  int fd_to;
  char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;

  
    if (argc != 3) {
        print_error_and_exit(97, "Usage: cp file_from file_to");
    }

    file_from = argv[1];
    file_to = argv[2];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        print_error_and_exit(98, "Error: Can't read from file");
    }

    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1) {
        print_error_and_exit(99, "Error: Can't write to file");
    }

   
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
      {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read)
	  {
            print_error_and_exit(99, "Error: Can't write to file");
        }
    }

    if (bytes_read == -1)
      {
        print_error_and_exit(98, "Error: Can't read from file");
    }

    if (close(fd_from) == -1 || close(fd_to) == -1)
      {
        print_error_and_exit(100, "Error: Can't close file descriptor");
    }

    return (0);
}
