#include "main.h"
/**
 * factorial - Function name
 *
 * Description : 'Function full description'
 * @n : Parameter 1
 * Return : factorial of n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
