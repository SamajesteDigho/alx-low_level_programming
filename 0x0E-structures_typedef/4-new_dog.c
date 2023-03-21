#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - check the code
 * @name: Parameter 1
 * @age: Parameter 2
 * @owner: Parameter 3
 * Description: Here the code description
 * Return: An instance of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
d = malloc(sizeof(dog_t) + 1);
if (d)
{
d->name = strcpy(name);
d->age = age;
d->owner = strcpy(owner);
return (d);
}
return (NULL);
}
