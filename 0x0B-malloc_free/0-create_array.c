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
if (size == 0)
{
return (NULL);
}
res = malloc(sizeof(int) * size);
res[0] = c;
return (res);
}
