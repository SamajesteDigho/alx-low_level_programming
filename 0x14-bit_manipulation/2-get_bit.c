#include "main.h"
/**
 * get_bit - Function name
 * @n: Parameter 1
 * @index: Parameter 2
 * Description: Gives the value of a bit at a given index
 * Return: Value
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int size;
size = get_min_bit_hold(n);
if (index > size)
{
return (-1);
}
if (n & (1u << index))
{
return (1);
}
else
{
return (0);
}
}

/**
 * get_min_bit_hold - Function name
 * @n: Parameter 1
 * Description: Helper function to get the min number of bits
 * required to print a binary
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
