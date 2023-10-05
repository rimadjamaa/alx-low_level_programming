#include <stdio.h>
#include <stdlib.h>
int is_digit(char *s);
/**
 * is_digit - Check if a string contains only digits
 * @s: String to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (is_digit(argv[i]))
sum += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);

return (0);
}
