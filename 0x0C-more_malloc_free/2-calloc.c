#include <string.h>
#include "main.h"
/**
 * _calloc - Function name
 * @nmemb: Parameter 1
 * @size: Parameter 2
 * Description: Here the description
 * Return: A pointer on a string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
if (nmemb <= 0 || size <= 0)
{
return (NULL);
}
p = calloc(nmemb, size);
if (p == NULL)
{
return (NULL);
}
return (p);
}
