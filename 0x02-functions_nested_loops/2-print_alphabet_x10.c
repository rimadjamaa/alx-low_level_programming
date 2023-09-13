#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10(:)? (- print all alphabets in lowercase 10 times)?
 */
void print_alphabet_x10(void)
{
char a, i = 0;
while (i < 10)
{
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
}
_putchar('\n');
i++;
}
}

