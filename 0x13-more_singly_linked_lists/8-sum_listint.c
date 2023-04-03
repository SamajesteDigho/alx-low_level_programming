#include "lists.h"
/**
 * sum_listint - Function name
 * @head: Parameter 1, List header
 * Description: Function that returns sum of all nodes
 * Return: Value of popped element
 */
int sum_listint(listint_t *head)
{
listint_t *tmp;
int sum;
sum = 0;
tmp = head;
while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
