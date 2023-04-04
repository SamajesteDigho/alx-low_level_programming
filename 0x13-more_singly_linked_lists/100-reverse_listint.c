#include "lists.h"
/**
 * reverse_listint - Function name
 * @head: Parameter 1, List header
 * Description: Function that returns sum of all nodes
 * Return: The value of head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *tmp, *mov;
if (*head == NULL)
{
return (NULL);
}
tmp = (*head);
mov = tmp->next;
tmp->next = NULL;
while (mov != NULL)
{
(*head) = mov;
mov = mov->next;
(*head)->next = tmp;
tmp = (*head);
}
return (*head);
}
