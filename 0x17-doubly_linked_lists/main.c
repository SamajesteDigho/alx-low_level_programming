#include "lists.h"
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
dlistint_t *head;
	dlistint_t *node;
	size_t n;

	head = NULL;
	node = insert_dnodeint_at_index(&head, 0, 98);
	if (node)
		printf("-> %d\n", node->n);
	else
		printf("(nil)\n");
	n = print_dlistint(head);
	printf("-> %lu elements\n", n);
	n = _print_dlistint_backward(head);
	printf("-> %lu elements\n", n);
	return (0);
}
