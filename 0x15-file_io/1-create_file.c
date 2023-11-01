#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fd, res_write, len;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len]; len++)
continue;

res_write = write(fd, text_content, len);
if (res_write == -1)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
