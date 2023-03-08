#include "main.h"
/**
 * _sqrt_recursion - Function name
 * @n : Parameter 1
 * Description : Function full description
 * Return : Return the square root
 */
int _sqrt_recursion(int n)
{
int i, a;
a = (n + 1) / 2;
for (i = 1; i <= a; i++)
{
if (i * i == n)
{
return (i);
}
}
return (-1);
}
