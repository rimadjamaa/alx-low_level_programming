#include <stdio.h>

/**
 * *strncat - swap between 2 int
 *
 * @dest: first pointer
 * @src: second pointer
 * @n: number of bytes to copy
 *
 * Return: nothing
 */

char *_strncat(char *dest, char *src, int n)
{
char *result = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (result);
}
