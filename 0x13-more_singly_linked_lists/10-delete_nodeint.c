#include "lists.h"
/**
 * delete_nodeint_at_index - Function name
 * @head: Parameter 1, List header
 * @index: Parameter 2, Position of element to delete
 * Description: Function that returns sum of all nodes
 * Return: The value of deleted node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *del;
unsigned int pos;
tmp = (*head);
pos = 0;
if (index == 0)
{
if (tmp != NULL)
{
del = tmp;
tmp = tmp->next;
del->next = NULL;
free(del);
(*head) = tmp;
return (1);
}
else
{
(*head) = NULL;
return (-1);
}
}
while (tmp->next != NULL && pos < index - 1)
{
tmp = tmp->next;
pos++;
}
if (tmp->next == NULL)
{
return (-1);
}
del = tmp->next;
tmp->next = tmp->next->next;
del->next = NULL;
free(del);
if (tmp == NULL)
{
(*head) = NULL;
}
return (1);
}
