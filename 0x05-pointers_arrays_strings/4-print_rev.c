#include <stdio.h>
/**
 * print_rev - print string in reverse
 * @s: the string
 * Return: the print
 */
void print_rev(char *s)
{
int length = 0;
int i;
while (s[length] != '\0')
{
length++;
}

for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
