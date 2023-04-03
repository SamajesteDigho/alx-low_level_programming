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



int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}