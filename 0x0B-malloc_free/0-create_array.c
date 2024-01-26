#include "main.h"
/**
 * create_array - Function name
 * @size: Parameter 1
 * @c: Parameter 2
 * Description: Here the description
 * Return: Returns pointer to a char
 */
char *create_array(unsigned int size, char c)
{
char *res;
unsigned int i;
if (size == 0)
{
return (NULL);
}
res = malloc(size * sizeof(char));
if (res == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
res[i] = c;
}
return (res);
}
