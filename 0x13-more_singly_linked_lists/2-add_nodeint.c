#include "lists.h"
/**
 * add_nodeint - Function name
 * @head: Parameter 1, List header
 * @n: Parameter 2, value of node to add
 * Description: Function that adds a new node at the beginning of the list
 * Return: The linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
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
new->next = *head;
(*head) = new;
}
return (*head);
}
return (NULL);
}
