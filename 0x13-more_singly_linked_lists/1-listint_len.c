#include "lists.h"
/**
 * listint_len - Function name
 * @h: Parameter 1, List header
 * Description: Function to print all elements of a list
 * Return: The size of th linked list
 */
size_t listint_len(const listint_t *h)
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
