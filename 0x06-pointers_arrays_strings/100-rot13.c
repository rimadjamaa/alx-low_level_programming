#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
char *s = str;
char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i;

while (*s)
{
if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
{
i = (*s >= 'a') ? (*s - 'a' + 13) : (*s - 'A' + 13);
*s = rot[i];
}
s++;
}

return (str);
}
