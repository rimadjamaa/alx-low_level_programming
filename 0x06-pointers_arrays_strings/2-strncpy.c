#include <stdio.h>
/**
 * *_strncpy - function that copy a string
 * @dest: dest file
 * @src: source file
 * @n: size of string
 * Return: nothing
 */
char *_strncpy(char *dest, const char *src, size_t n)
{
char *result = dest;
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (result);
}
