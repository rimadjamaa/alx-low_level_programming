#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *@c:the_caracter_to_print
 * Return: Always 0 (Success)
*/
int _putchar(char c);
/**
*print alphabets in lowercase
*/
void print_alphabet(void)
{
char a;
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
}
_putchar('\n');
}

