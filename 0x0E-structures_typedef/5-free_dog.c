#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Function name
 * @d: Parameter 1
 * Description: Here the code description
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
d = NULL;
}
}
