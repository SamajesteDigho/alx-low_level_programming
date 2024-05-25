#ifndef SEARCH_ALGO
#define SEARCH_ALGO

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
int n;
size_t index;
struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int search_algo(int *array, size_t start, size_t end, int value);
void print_array(int *array, size_t start, size_t end);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
size_t find_interpolation_index(int *arr, size_t lw, size_t hg, int vl);
size_t interpolation(int *array, size_t start, size_t end, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif /* SEARCH_ALGO */
