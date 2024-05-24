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
top = 0;
while (top < size)
{
if (value <= array[top])
break;
printf("Value checked array[%ld] = [%d]\n", top, array[top]);
low = top;
top += b_size;
}
if (top > size)
top = size;
printf("Value found between indexes [%ld] and [%ld]\n", low, top);
for (i = low; i < top; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
