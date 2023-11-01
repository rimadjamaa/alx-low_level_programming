#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output.
* @filename: Name of the file to read.
* @letters: Number of letters to read and print.
*
* Return: Actual number of letters read and printed, 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_descriptor;
ssize_t n_read, n_written;
char *buffer;

if (filename == NULL)
return (0);

file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(file_descriptor);
return (0);
}

n_read = read(file_descriptor, buffer, letters);
if (n_read == -1)
{
free(buffer);
close(file_descriptor);
return (0);
}

n_written = write(STDOUT_FILENO, buffer, n_read);

free(buffer);
close(file_descriptor);

if (n_written != n_read)
return (0);

return (n_written);
}
