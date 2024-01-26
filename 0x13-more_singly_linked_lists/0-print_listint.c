#include "lists.h"
/**
 * print_listint - Function name
 * @h: Parameter 1, List header
 * Description: Function to print all elements of a list
 * Return: The size of th linked list
 */
size_t print_listint(const listint_t *h)
{
size_t size;
size = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
size++;
}
return (size);
}
