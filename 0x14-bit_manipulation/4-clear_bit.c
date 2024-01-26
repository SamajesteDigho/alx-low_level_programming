#include "main.h"
/**
 * clear_bit - Function name
 * @n: Parameter 1
 * @index: Parameter 1
 * Description: Sets the bit at a given index
 * Return: The status of the execution
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int mask;
mask = ~(*n);
(*n) = ~(mask | (1 << index));
if (*n)
{
return (1);
}
else
{
return (-1);
}
}
