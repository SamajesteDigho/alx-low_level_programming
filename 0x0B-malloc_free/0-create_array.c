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
int i;
if (size == 0)
{
return (NULL);
}
res = malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
{
res[i] = c;
}
return (res);
}
