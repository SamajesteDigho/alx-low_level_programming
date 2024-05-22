#ifndef SEARCH_ALGO
#define SEARCH_ALGO

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int search_algo(int *array, size_t start, size_t end, int value);
void print_array(int *array, size_t start, size_t end);

#endif /* SEARCH_ALGO */
