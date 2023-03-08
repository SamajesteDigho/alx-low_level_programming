#include "main.h"
/**
 * factorial - Function name
 * @n : Parameter 1
 * Description : 'Function full description'
 * Return : Return factorial
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
