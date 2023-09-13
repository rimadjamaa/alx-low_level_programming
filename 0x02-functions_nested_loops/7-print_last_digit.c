#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Prints and returns the last digit of a number
 * @num: The number to extract the last digit from
 *
 * Return: The last digit of the number
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

