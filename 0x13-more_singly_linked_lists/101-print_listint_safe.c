#include "lists.h"
/**
 * print_listint_safe - Function name
 * @head: Parameter 1, List header
 * Description: Function that returns sum of all nodes
 * Return: The value of head of reversed list
 */
size_t print_listint_safe(const listint_t *head)
{
listint_t *tmp;
size_t size;
size = 1;
printf("%d\n", head->n);
tmp = head->next;
while (tmp != NULL && tmp->n != -1)
{
size++;
printf("%d\n", tmp->n);
tmp->n = -1;
tmp = tmp->next;
}
return (size);
}
