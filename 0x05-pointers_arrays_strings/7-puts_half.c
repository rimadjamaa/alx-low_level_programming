#include <stdio.h>
#include "main.h"
/**
 * puts_half - Entry point
 * @str: string
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
int lenth = 0;
int i;
while (str[lenth] != '\0')
{
lenth++;
}
for (i = (lenth / 2); i <= (lenth - 1) ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
