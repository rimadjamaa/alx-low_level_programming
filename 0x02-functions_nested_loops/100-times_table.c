#include "main.h"
/**
* print_times_table - Prints the n times table
* @n: The number for which the times table is to be printed
* Description: Prints the times table for the given number n.
* If n is greater than 15 or less than 0, nothing is printed.
* The output is formatted as specified in the example.
*/
void print_times_table(int n)
{
int row, col, result;
if (n < 0 || n > 15)
return;
for (row = 0; row <= n; row++)
{
for (col = 0; col <= n; col++)
{
result = row * col;
if (col == 0)
_putchar('0');
else
{
_putchar(',');
_putchar(' ');
if (result < 10)
_putchar(' ');
if (result < 100)
_putchar(' ');
if (result >= 100)
_putchar(result / 100 + '0');
if (result >= 10)
_putchar((result / 10) % 10 + '0');
_putchar(result % 10 + '0');
}
}
_putchar('\n');
}
}
