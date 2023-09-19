#include <stdio.h>
/**
 * _strlen - get the lentgh of character
 * @s: the caractere
 * Return: the lentgh
*/
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
