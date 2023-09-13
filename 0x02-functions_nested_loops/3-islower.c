#include <stdio.h>
#include "main.h"
/**
 * _islower:- check if the caracter is lower alphabet
 * @c: is caracter 
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}

