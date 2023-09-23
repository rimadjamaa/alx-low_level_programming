#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
long int a = 1, b = 2, temp;
int count;
printf("%ld, %ld", a, b);
for (count = 2; count < 50; count++)
{
temp = a + b;
printf(", %ld", temp);
a = b;
b = temp;
}
printf("\n");
return (0);
}
