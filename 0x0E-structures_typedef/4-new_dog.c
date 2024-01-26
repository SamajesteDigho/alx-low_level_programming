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
d = malloc(sizeof(dog_t));
if (d)
{
d->name = strdup(name);
d->age = age;
d->owner = strdup(owner);
return (d);
}
return (NULL);
}
