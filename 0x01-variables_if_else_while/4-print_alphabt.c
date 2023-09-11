#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letters = 'a';
while (letters <= 'z')
{
if (letters == 'q' || letters == 'e')
letters++;
putchar(letters);
letters++;
}
putchar('\n');
return (0);
}


