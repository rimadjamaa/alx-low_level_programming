#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long a = 1, b = 2, sum;
int i;
printf("%lu, %lu, ", a, b);
for (i = 2; i < 98; i++)
{
sum = a + b;
printf("%lu", sum);
if (i != 97)
printf(", ");
a = b;
b = sum;
}
printf("\n");
return (0);
}
