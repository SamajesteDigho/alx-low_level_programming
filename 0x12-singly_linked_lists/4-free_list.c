#include "lists.h"
/**
 * free_list - Function name
 * @head: Parameter 1
 * Description: Function that adds a new node at the beginning of a list
 */
void free_list(list_t *head)
{
list_t *tmp, *del;
tmp = head;
while (tmp != NULL)
{
del = tmp;
tmp = tmp->next;
free(del->str);
del->len = 0;
del->next = NULL;
del = NULL;
}
head = NULL;
}
