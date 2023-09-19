#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
