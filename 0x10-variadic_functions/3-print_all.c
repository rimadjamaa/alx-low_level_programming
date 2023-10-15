#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a character
 * @args: va_list containing the character to print
 */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: va_list containing the integer to print
 */
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list containing the float to print
 */
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: va_list containing the string to print
 */
void print_string(va_list args)
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *ptr = format;

va_start(args, format);

while (format != NULL && *ptr != '\0')
{
switch (*ptr)
{
case 'c':
print_char(args);
break;
case 'i':
print_int(args);
break;
case 'f':
print_float(args);
break;
case 's':
print_string(args);
break;
default:
ptr++;
continue;
}

if (*(ptr + 1) != '\0')
printf(", ");

ptr++;
}

printf("\n");

va_end(args);
}
