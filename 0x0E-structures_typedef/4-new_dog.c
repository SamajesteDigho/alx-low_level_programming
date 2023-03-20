#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - check the code
 * @name: Parameter 1
 * @age: Parameter 3
 * @owner: Parameter 4
 * Description: Here the code description
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
d = malloc(sizeof(dog_t));
if (d == NULL)
{
return (NULL);
}
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
