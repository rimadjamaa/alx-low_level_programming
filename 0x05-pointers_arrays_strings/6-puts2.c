#include <stdio.h>
#include "main.h"
/**
 * rev_string - Entry point
 * @s: string
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
int lenth = 0;
int i;
while (str[lenth] != '\0')
{
lenth++;
}
for (i = 0; i <= (lenth - 1); i = i + 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
