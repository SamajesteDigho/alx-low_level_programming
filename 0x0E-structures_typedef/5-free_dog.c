#include <stdio.h>
#include "dog.h"
/**
 * free_dog - Function name
 * @d: Parameter 1
 * Description: Here the code description
 */
void free_dog(dog_t *d)
{
free(d->name);
d->age = NULL;
free(d->owner);
free(d);
d = NULL;
}
