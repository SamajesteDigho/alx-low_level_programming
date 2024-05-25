#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Jump Search on a list
 * @list: List
 * @size: List size
 * @value: Value to search
 * Description: Jump search on a list
 * Return: Pointer on element or NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t step, pos, i;
listint_t *back, *front;
if (list == NULL)
return (NULL);
step = sqrt(size);
pos = 0;
back = list;
front = list;
while (pos < size && value > front->n)
{
pos += step;
back = front;
for (i = 0; i < step; i++)
{
if (front->next != NULL)
front = front->next;
else
break;
}
printf("Value cheked at index [%ld] = [%d]\n", front->index, front->n);
}
if (pos >= size)
printf("Value found between indexes [%ld] and [%ld]\n", back->index, size - 1);
else
printf("Value found between indexes [%ld] and [%ld]\n", back->index, pos);


while (back != NULL && back != front->next)
{
printf("Value checked at index [%ld] = [%d]\n", back->index, back->n);
if (back->n == value)
{
return (back);
}
back = back->next;
}
return (NULL);
}
