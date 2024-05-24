#ifndef SEARCH_ALGO
#define SEARCH_ALGO

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int search_algo(int *array, size_t start, size_t end, int value);
void print_array(int *array, size_t start, size_t end);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
size_t find_interpolation_index(int *arr, size_t lw, size_t hg, int vl);
size_t interpolation(int *array, size_t start, size_t end, int value);

#endif /* SEARCH_ALGO */
