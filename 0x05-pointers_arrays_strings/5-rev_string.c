#include <stdio.h>
/**
 * rev_string - Entry point
 * @s: string
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
int lenth = 0;
int i;
char temp;
int final;
while (s[lenth] != '\0')
{
lenth++;
}
final = lenth - 1;
for (i = 0; i <= ((lenth-1) / 2); i++)
{
temp = s[final];
s[final] = s[i];
s[i] = temp;
final--;
}
}
