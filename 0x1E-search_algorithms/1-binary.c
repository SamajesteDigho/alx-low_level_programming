#include "search_algos.h"
/**
 * print_array - Print Array
 * @array: The array of values
 * @start: Start index
 * @end: End index
 * Description: Print the array according to the given indexes
 */
void print_array(int *array, size_t start, size_t end)
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
 * search_algo - Search Algo
 * @array: The array of values
 * @start: Start index
 * @end: End index
 * @value: Value to be searched
 * Description: Print the array according to the given indexes
 * Return: Index of the searched
 */
int search_algo(int *array, size_t start, size_t end, int value)
{
size_t size, mid;
size = end - start;
print_array(array, start, end);
if (size < 1)
return (-1);
if (size == 1)
{
if (array[start] == value)
return (start);
else
return (-1);
}
mid = (end + start - 1) / 2;
if (array[mid] == value)
return (mid);
else if (array[mid] <= value)
return (search_algo(array, mid + 1, end, value));
else
return (search_algo(array, start, mid, value));
}

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
return (search_algo(array, 0, size, value));
}
