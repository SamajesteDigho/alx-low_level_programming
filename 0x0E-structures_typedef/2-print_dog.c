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
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
}


int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}