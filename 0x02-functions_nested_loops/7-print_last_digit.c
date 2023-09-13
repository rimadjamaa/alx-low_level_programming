#include <stdio.h>
#include "main.h"
/**
* print_last_digit:-
*@num: the number
* Return: the last digit
*/
int print_last_digit(int num)
{
int lastdigit;
if (num < 0)
num = -num;
lastdigit = num % 10;
_putchar('0' + lastdigit);
return (lastdigit);
}

