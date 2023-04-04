#include "lists.h"
/**
 * insert_nodeint_at_index - Function name
 * @head: Parameter 1, List header
 * @idx: Parameter 2, Position of element to insert
 * @n: Parameter 3, Value of element to insert
 * Description: Function that returns sum of all nodes
 * Return: The read of the list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *tmp, *new;
unsigned int pos;
tmp = *head;
pos = 0;
while ((tmp->next != NULL) && (pos < idx - 1))
{
tmp = tmp->next;
pos++;
}
if ((tmp == NULL) || (pos >= idx))
{
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new)
{
new->n = n;
new->next = tmp->next;
tmp->next = new;
return (new);
}
else
{
return (NULL);
}
}
