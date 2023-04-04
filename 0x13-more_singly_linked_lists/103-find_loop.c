#include "lists.h"
/**
 * find_listint_loop - Function name
 * @head: Parameter 1, List header
 * Description: Function that returns sum of all nodes
 * Return: The size of freed list
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tmp;
tmp = head;
while (tmp != NULL && tmp->n != -1)
{
tmp->n = tmp->n * -1;
tmp = tmp->next;
}
if (tmp == NULL || tmp->n == -1)
{
return (NULL);
}
tmp->n = tmp->n * -1;
return (tmp);
}
