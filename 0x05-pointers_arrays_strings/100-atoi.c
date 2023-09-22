#include "main.h"
#include <limits.h>
/**
* _atoi - Converts a string to an integer.
* @s: The input string.
11;rgb:0000/0000/0000* Return: The converted integer.
*/
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;
while (s[i] && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
{
sign *= -1;
}
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
if (result > (INT_MAX / 10))
{
return ((sign == 1) ? INT_MAX : INT_MIN);
}
if ((result == (INT_MAX / 10) && (s[i] - '0' > INT_MAX % 10)))
return ((sign == 1) ? INT_MAX : INT_MIN);
result = result * 10 + (s[i] - '0');
i++;
}
return (result *sign);
}
