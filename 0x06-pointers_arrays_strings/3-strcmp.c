#include <stdio.h>
/**
 * _strcmp- this function will switch between tow strings
 * @s1: dest file
 * @s2: source file
 * Return: the string
 */
int _strcmp(const char *s1, const char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 < *s2)
{
return (-15);
}
else if (*s1 > *s2)
{
return (15);
}
else
{
return (0);
}
}
