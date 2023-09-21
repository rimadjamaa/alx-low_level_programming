#include <stdio.h>
/**
 * *_stract - swap between 2 int
 * @dest: destination file
 * @src: source file
 * Return: nothing
 */
char *_strcat(char *dest, char *src)
{
char *result = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (result);
}
