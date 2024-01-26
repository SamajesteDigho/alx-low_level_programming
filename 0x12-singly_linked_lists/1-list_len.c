#include "lists.h"
/**
 * list_len - Function name
 * @h: Parameter 1
 * Description: Function for printing the elements of a linked list
 * Return: Returns the size of the linked list
 */
size_t list_len(const list_t *h)
{
size_t size;
size = 0;
while (h != NULL)
{
size++;
h = h->next;
}
return (size);
}
