#include "function_pointers.h"
/**
 * array_iterator - Function name
 * @array: Parameter 1
 * @size: parameter 2
 * @action: parameter 3
 * Description: Describing the function
 * Return: Returns Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (action && array)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
