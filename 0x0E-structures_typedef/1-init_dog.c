#include <stdio.h>
#include "dog.h"
/**
 * init_dog - check the code
 * @d: Parameter 1
 * @name: Parameter 2
 * @age: Parameter 3
 * @owner: Parameter 4
 * Description: Here the code description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return (NULL);
}
d->name = name;
d->age = age;
d->owner = owner;
}
