#include "lists.h"
/**
 * insert_dnodeint_at_index - Add at index
 * @h: Head of list
 * @idx: index at which to add
 * @n: value of node to add
 * Desription: Add a node at a given index
 * Return: Address of added node or NULL otherwise
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *tmp;
unsigned int count;
count = 0;
tmp = *h;
new = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
new->prev = NULL;
if (idx == 0)
{
if (*h == NULL)
{
*h = new;
return (new);
}
new->next = *h;
new->prev = (*h)->prev;
(*h)->prev = new;
*h = new;
return (new);
}
while (tmp != NULL && count < idx - 1)
{
tmp = tmp->next;
count++;
}
if (tmp == NULL)
{
return (NULL);
}
new->next = tmp->next;
new->prev = tmp;
if (tmp->next != NULL)
{
tmp->next->prev = new;
}
tmp->next = new;
return (new);
}
