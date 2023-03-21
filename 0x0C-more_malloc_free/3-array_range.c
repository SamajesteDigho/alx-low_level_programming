#include "main.h"
/**
 * array_range - Function name
 * @min: Parameter 1
 * @max: Parameter 2
 * Description: Here the description
 * Return: A pointer on a string
 */
int *array_range(int min, int max)
{
int *p;
int i;
if (min > max)
{
return (NULL);
}
p = malloc(sizeof(int) * (max - min + 1));
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < (max - min + 1); i++)
{
p[i] = min + i;
}
return (p);
}
