#include "search_algos.h"
/**
 * binary_search - Binary Search
 * @array: The array of values
 * @size: Size of the array
 * @value: The value to be searched
 * Description: Find and return the index of the first occurence of the value.
 * Return: Index or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    size_t i;
    if (array == NULL || size == 0)
    {
        return (-1);
    }
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return (i);
        }
    }
    return (-1);
}
