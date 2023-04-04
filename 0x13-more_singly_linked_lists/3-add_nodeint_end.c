#include "lists.h"
/**
 * add_nodeint_end - Function name
 * @head: Parameter 1, List header
 * @n: Parameter 2, value of node to add
 * Description: Function that adds a new node at the beginning of the list
 * Return: The linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *tmp;
new = malloc(sizeof(listint_t));
if (new)
{
new->n = n;
new->next = NULL;
if (*head == NULL)
{
(*head) = new;
}
else
{
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new;
}
return (*head);
}
return (NULL);
}
