#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Function name
 * @d: Only parameter
 * Description: Here the description
 */
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %p\nAge: %f\nOwner: %p\n", d->name, d->age, d->owner);
}
}