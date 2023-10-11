#include <stdio.h>
#include "dog.h"
#include <stddef.h>

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
}
