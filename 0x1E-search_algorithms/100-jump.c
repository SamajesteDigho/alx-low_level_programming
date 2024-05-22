#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Jump Search
 * @array: Array
 * @size: Size of array
 * @value: Search Value
 * Description: Search value by jump search
 * Return: Index found or -1
 */
int jump_search(int *array, size_t size, int value)
{
size_t b_size, low, top, i;
if (array == NULL || size == 0)
return (-1);
b_size = sqrt(size);
low = 0;
top = b_size;
printf("Value checked array[%ld] = [%d]\n", low, array[low]);
if (array[low] > value)
return (-1);
while (top + 1 <= size)
{
if (value <= array[top])
{
printf("Value found between indexes [%ld] and [%ld]\n", low, top);
break;
}
else
{
printf("Value checked array[%ld] = [%d]\n", top, array[top]);
low = top;
top += b_size;
if (top > size)
printf("Value found between indexes [%ld] and [%ld]\n", low, top);
}
}
if (top >= size)
{
printf("Value checked array[%ld] = [%d]\n", low, array[low]);
return (-1);
}
for (i = low; i < top + 1; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
