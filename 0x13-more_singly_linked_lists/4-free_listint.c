#include "lists.h"
/**
 * free_listint - Function name
 * @head: Parameter 1, List header
 * Description: Function to free a list
 */
void free_listint(listint_t *head)
{
listint_t *tmp, *del;
if (head != NULL)
{
tmp = head;
while (tmp != NULL)
{
del = tmp;
tmp = tmp->next;
del->next = NULL;
free(del);
}
}
}
