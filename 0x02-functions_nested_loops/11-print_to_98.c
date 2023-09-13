#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
int i;
for (i = n; i != 98; i += (n <= 98 ? 1 : -1))
{
if (i < 0)
{
_putchar('-');
i = -i;
}
printf("%d, ", i);
}
printf("98\n");
}
