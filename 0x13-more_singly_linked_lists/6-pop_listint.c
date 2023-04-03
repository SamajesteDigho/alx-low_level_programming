#include "lists.h"
/**
 * pop_listint - Function name
 * @head: Parameter 1, List header
 * Description: Function to free a list
 * Return: Value of popped element
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int value;
if ((*head) == NULL)
{
return (0);
}
else
{
tmp = (*head);
(*head) = tmp->next;
tmp->next = NULL;
value = tmp->n;
free(tmp);
return (value);
}
}
