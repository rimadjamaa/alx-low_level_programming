#include "main.h"
#include <stdio.h>
/**
* is_separator - Checks if a character is a separator.
* @c: The character to check.
* Return: 1 if c is a separator, 0 otherwise.
*/
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;
for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
return (1);
}
return (0);
}
