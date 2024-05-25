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
for (i = start; i <= end; i++)
{
printf("%d", array[i]);
if (i < end)
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
{
internal_print_array(array, start, end);
return (-1);
}
}
internal_print_array(array, start, end);
middle = (end + start) / 2;
if (value <= array[middle])
return (internal_binary_search(array, start, middle, value));
else
return (internal_binary_search(array, middle + 1, end, value));
}
/**
 * advanced_binary - Advanced Binary Search
 * @array: Array
 * @size: Size
 * @value: Value
 * Description: Advanced Binaary search with insistance on first occurence.
 * Return: First index of searched element or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);

return (internal_binary_search(array, 0, size - 1, value));
}
