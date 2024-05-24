#include "search_algos.h"
/**
 * internal_print_array - Print Array
 * @array: The array of values
 * @start: Start index
 * @end: End index
 * Description: Print the array according to the given indexes
 */
void internal_print_array(int *array, size_t start, size_t end)
{
size_t i;
printf("Searching in array: ");
for (i = start; i < end; i++)
{
printf("%d", array[i]);
if (i < end - 1)
printf(", ");
}
printf("\n");
}

/**
 * internal_binary_search - Exponential Search
 * @array: Array
 * @start: Starting index
 * @end: Ending index
 * @value: To be searched
 * Description: Binary Search on a part of the array
 * Return: Index of value or -1
 */
int internal_binary_search(int *array, size_t start, size_t end, int value)
{
size_t middle;
if (start > end)
return (-1);
if (start == end)
{
if (array[start] == value)
return (start);
else
return (-1);
}
internal_print_array(array, start, end);
middle = (end + start - 1) / 2;
if (array[middle] == value)
return (middle);
else if (value < array[middle])
return (internal_binary_search(array, start, middle, value));
else
return (internal_binary_search(array, middle + 1, end, value));
}

/**
 * exponential_search - Exponential Search
 * @array: Array
 * @size: Array size
 * @value: To be searched
 * Description: Search a value in a sorted list using the exponential search
 * Return: Index of value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
size_t start, end, i = 1;
if (array == NULL || size == 0)
return (-1);
if (array[0] == value)
return (0);
while (i < size && array[i] <= value)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
i *= 2;
}
start = i / 2;
end = i + 1;
if (i >= size)
{
end = size;
}
printf("Value found between indexes [%ld] and [%ld]\n", start, end - 1);

return (internal_binary_search(array, start, end, value));
}
