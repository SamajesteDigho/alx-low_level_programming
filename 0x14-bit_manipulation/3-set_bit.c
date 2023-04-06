#include "main.h"
/**
 * set_bit - Function name
 * @n: Parameter 1
 * @index: Parameter 1
 * Description: Sets the bit at a given index
 * Return: The status of the execution
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int mask;
mask = 1 << index;
(*n) |= mask;
if (*n)
{
return (1);
}
else
{
return (-1);
}
}

/**
 * get_min_bit_hold - Function name
 * @n: Parameter 1
 * Description: Helper function to get the min number of bits required to print a binary
 * Return: Returns number of bits
 */
unsigned int get_min_bit_hold(unsigned int n)
{
int size;
if (n <= 0)
{
return (1);
}
size = 0;
while (n > 0)
{
size++;
n >>= 1;
}
return (size);
}
