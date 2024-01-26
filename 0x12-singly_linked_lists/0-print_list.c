#include "lists.h"
/**
 * print_list - Function name
 * @h: Parameter 1
 * Description: Function for printing the elements of a linked list
 * Return: Returns the size of the linked list
 */
size_t print_list(const list_t *h)
{
size_t size;
size = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
size++;
h = h->next;
}
return (size);
}
