#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <math.h>

unsigned int binary_to_uint(const char *b);
int power(int base, int exp);
void print_binary(unsigned long int n);
unsigned int get_min_bit_hold(unsigned int n);
int get_bit(unsigned long int n, unsigned int index);

#endif /* MAIN_H */