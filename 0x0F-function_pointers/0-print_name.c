#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: function pointer to a function that takes a char* and returns void
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
