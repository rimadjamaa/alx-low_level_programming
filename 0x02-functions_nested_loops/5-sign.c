#include <stdio.h>
#include "main.h"
/**
* print_sign:- check the status (+,-or 0)for the ascii number of caracter
*@c:is caracter
* Return: 1 if it's possitive 0 if it's zero -1 if it's negative
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

