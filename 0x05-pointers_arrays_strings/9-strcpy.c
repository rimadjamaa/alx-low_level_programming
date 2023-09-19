#include <stdio.h>
#include "main.h"
/**
 * *_strcpy - copy the file source to destination
 * @src: file source
 * @dest: the file destination
 * Return: the file dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
