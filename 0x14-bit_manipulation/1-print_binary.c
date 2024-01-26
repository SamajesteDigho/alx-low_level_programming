#include "main.h"
/**
 * print_binary - Function name
 * @n: Parameter 1
 * Description: Function to print the binary representation of n
 */
void print_binary(unsigned long int n)
{
int i, size;
size = get_min_bit_hold(n);
for (i = size - 1; i >= 0; i--)
{
if (n & (1u << i))
{
putchar('1');
}
else
{
putchar('0');
}
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
