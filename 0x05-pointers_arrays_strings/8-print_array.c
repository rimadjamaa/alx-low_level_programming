#include <stdio.h>
#include "main.h"
/**
 * print_array - print n element of the array a
 * @n: number of element
 * @a: the array
 * Return: nthing
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n ; i++)
{
printf("%d", a[i]);
if (i != (n - 1))
{
printf(" ,");
}
}
printf("\n");
}
