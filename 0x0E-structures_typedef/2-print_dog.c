#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Function name
 * @d: Only parameter
 * Description: Here the description
 */
void print_dog(struct dog *d)
{
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
