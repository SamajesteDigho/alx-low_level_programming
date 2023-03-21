#include "main.h"
#include <limits.h>
/**
 * malloc_checked - Function name
 * @b: Parameter 1
 * Description: Here the description
 * Return: Pointer on NULL
 */
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
