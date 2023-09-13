#include <stdio.h>
#include "main.h"
/**
* _islower:- check if the caracter is lower alphabet
*@c:is caracter
* Return: 1 if it's lower alphabet 0 if it's not
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}

