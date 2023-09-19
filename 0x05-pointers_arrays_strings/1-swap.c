#include <stdio.h>
/**
 * swap_int - swap between 2 int
 * @a: first pointer
 * @b: second pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
