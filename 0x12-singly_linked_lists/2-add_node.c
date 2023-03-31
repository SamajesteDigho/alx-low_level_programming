#include "lists.h"
/**
 * add_node - Function name
 * @head: Parameter 1
 * @str: Parameter 2
 * Description: Function that adds a new node at the beginning of a list
 * Return: Returns the size of the linked list
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
else
{
new->str = strdup(str);
new->len = strlen(str);
new->next = (*head);
(*head) = new;
return (head);
}
}
