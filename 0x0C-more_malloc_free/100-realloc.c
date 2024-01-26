#include "main.h"
#include <string.h>
/**
 * _realloc - Function name
 * @ptr: Parameter 1
 * @old_size: Parameter 2
 * @new_size: Parameter 3s
 * Description: Here the description
 * Return: A pointer on a string
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (ptr)
{
if (new_size == 0)
{
free(ptr);
ptr = NULL;
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
if (old_size < new_size)
{
ptr = malloc(new_size);
return (ptr);
}
else
{
free(ptr);
ptr = realloc(ptr, new_size);
if (ptr)
{
return (ptr);
}
return (NULL);
}
}
return (malloc(new_size));
}
