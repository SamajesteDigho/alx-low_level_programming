#include "main.h"
/**
 * binary_to_uint - Function name
 * @b: Parameter 1
 * Description: Function to convert binary to unsigned int
 * Return: Returns unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int size, i, result;
if (b == NULL)
{
return (0);
}
size = strlen(b);
result = 0;
for (i = 0; i < size; i++)
{
if (b[i] == '1')
{
result += power(2, ((size - 1) - i));
}
else if (b[i] == '0')
{
result += 0;
}
else
{
return (0);
}
}
return (result);
}

/**
 * power - Function name
 * @base: base number
 * @exp: exponent
 * Description: Function to calculate the power of a number
 * Return: Returns base^exp
 */
int power(int base, int exp)
{
int result, i;
result = 1;
for (i = 1; i <= exp; i++)
{
result *= base;
}
return (result);
}
