#include <string.h>
#include "main.h"
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
unsigned int i;
if (ptr)
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (old_size > new_size)
{
for (i = 0; i < new_size; i++)
{
ptr[i] = ptr[i];
}
ptr[i] = '\0';
return (ptr);
}
else
{
return (ptr);
}
}
return (malloc(new_size));
}
