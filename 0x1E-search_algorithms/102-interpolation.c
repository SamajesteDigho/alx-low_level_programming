#include "search_algos.h"

/**
 * find_interpolation_index: Find Interpolation Index
 * @arr: Array concerned
 * @lw: Start point of the array to be worked on
 * @hg: End point of the array to be worked on
 * @vl: Value to be searched
 * Description: Search for the interpolation index
 * Return: Interpolation index
*/
size_t find_interpolation_index(int *arr, size_t lw, size_t hg, int vl)
{
return (lw + (((double)(hg - lw) / (arr[hg] - arr[lw])) * (vl - arr[lw])));
}

/**
 * interpolation: Interpolation Mechanism
 * @array: Array concerned
 * @start: Start point of the array to be worked on
 * @end: End point of the array to be worked on
 * @value: Value to be searched
 * Description: Process the interpolation mechanism
 * Return: Interpolation index
*/
size_t interpolation(int *array, size_t start, size_t end, int value)
{
size_t idx;
if (start > end)
return (-1);

if (start == end)
{
if (array[start] == value)
return (start);
else
return (-1);
}
idx = find_interpolation_index(array, start, end, value);
if (idx >= start && idx <= end)
printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
else
{
printf("Value checked array[%ld] is out of range\n", idx);
return (-1);
}

if (array[idx] == value)
return (idx);
else if (value < array[idx])
return (interpolation(array, start, idx - 1, value));
else
return (interpolation(array, idx + 1, end, value));
}

/**
 * interpolation_search: Interpolation Search
 * @array: Array
 * @size: Size
 * @value: Value
 * Description: Search using interpolation search
 * Return: Search element index
*/
int interpolation_search(int *array, size_t size, int value)
{
if (array == NULL || size < 1)
return (-1);
return (interpolation(array, 0, size - 1, value));
}
