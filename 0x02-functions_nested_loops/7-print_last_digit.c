#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
* print_last_digit:-
*@num: the number
* Return: the last digit
*/
int print_last_digit(int num)
{
int lastdigit;
if (num < 0)
lastdigit = -(num % 10);
else
lastdigit = num % 10;
_putchar('0' + lastdigit);
return (lastdigit);
}

