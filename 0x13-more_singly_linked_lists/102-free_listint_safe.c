#include "lists.h"
/**
 * free_listint_safe - Function name
 * @h: Parameter 1, List header
 * Description: Function that returns sum of all nodes
 * Return: The size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *tmp, *del;
size_t size;
size = 0;
tmp = *h;
while (tmp != NULL)
{
del = tmp;
tmp = tmp->next;
del->next = NULL;
free(del);
del = NULL;
size++;
}
(*h) = NULL;
return (size);
}
