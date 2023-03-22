#include "function_pointers.h"
/**
 * int_index - Function name
 * @array: Parameter 1
 * @size: parameter 2
 * @cmp: parameter 3
 * Description: Describing the function
 * Return: Returns integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if(cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
