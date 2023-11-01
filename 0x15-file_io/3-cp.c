#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define BUF_SIZE 1024
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, exit codes for errors
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, c_f, c_t, n_read;
char buf[BUF_SIZE];
if (argc != 3)
{
dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((n_read = read(fd_from, buf, BUF_SIZE)) > 0)
{
if (write(fd_to, buf, n_read) == -1 || write(fd_to, buf, n_read) != n_read)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (n_read == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
c_f = close(fd_from);
c_t = close(fd_to);
if (c_f == -1 || c_t == -1)
{
dprintf(2, "Error: Can't close fd %d\n", c_f ? fd_from : fd_to);
exit(100);
}
return (0);
}
