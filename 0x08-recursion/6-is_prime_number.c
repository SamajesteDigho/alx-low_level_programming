#include "main.h"

/**
 * findFactor - Function name
 * @n: Parameter 1
 * @pos: Parameter 1
 * Description: 'Function full description'
 * Return: Return 1 or 0
 */
int findFactor(int n, int pos)
{
if (pos == 1)
{
return (1);
}
if (n % pos == 0)
{
return (0);
}
else
{
return (findFactor(n, pos - 1));
}
}

/**
 * is_prime_number - Function name
 * @n: Parameter 1
 * Description: 'Function full description'
 * Return: Return 1 or 0
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (findFactor(n, n / 2));
}
