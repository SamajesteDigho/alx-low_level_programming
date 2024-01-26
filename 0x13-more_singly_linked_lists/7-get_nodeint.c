#include "lists.h"
/**
 * get_nodeint_at_index - Function name
 * @head: Parameter 1, List header
 * @index: Parameter 2, List header
 * Description: Function thar returns the element at position index
 * Return: Value of popped element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *tmp;
unsigned int pos;
tmp = head;
pos = 0;
while (tmp != NULL && pos < index)
{
tmp = tmp->next;
pos++;
}
if (tmp == NULL)
{
return (NULL);
}
return (tmp);
}
