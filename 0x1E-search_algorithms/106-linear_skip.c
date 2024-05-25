#include "search_algos.h"

/**
 * linear_skip - Linear Skip Search
 * @list: List concerned
 * @value: Value searched
 * Description: Using skip search to find a value in a singly linked list.
 * Return: The point on the element if found
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *back, *front;
size_t step;
if (list == NULL)
return (NULL);

back = list;
front = list->express;

while (front != NULL)
{
printf("Value checked at index [%ld] = [%d]\n", front->index, front->n);
if (value <= front->n)
break;
back = front;
front = front->express;
if (front != NULL)
step = front->index - back->index;
}

if (back->express != NULL)
printf("Value found between indexes [%ld] and [%ld]\n",
back->index, back->express->index);
else
printf("Value found between indexes [%ld] and [%ld]\n",
back->index, back->index + step - 1);

while (back != NULL)
{
printf("Value checked at index [%ld] = [%d]\n", back->index, back->n);
if (back->n == value)
return (back);
back = back->next;
}
return (NULL);
}
