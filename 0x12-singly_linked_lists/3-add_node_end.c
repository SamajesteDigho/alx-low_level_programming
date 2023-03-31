#include "lists.h"
/**
 * add_node_end - Function name
 *
 * @head: Parameter 1
 * @str: Parameter 2
 * Description: Function that adds a new node at the beginning of a list
 * Return: Returns the size of the linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *tmp;
new = malloc(sizeof(list_t));
if (new)
{
new->str = strdup(str);
new->len = strlen(str);
new->next = NULL;
if (*head == NULL) {
*head = new;
return (*head);
}
else
{
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new;
return (*head);
}
}
return (NULL);
}
