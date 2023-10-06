#include <stdio.h>
#include "main.h"
/**
* _isalpha:- check if the caracter is alphabet
*@c:is caracter
* Return: 1 if it's alphabet 0 if it's not
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}

