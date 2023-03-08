#include "main.h"
/**
 * _search_sqrt - Function name
 * @x: Parameter 1
 * @a: Parameter 2
 * @b: Parameter 3
 * Description: 'Function full description'
 * Return: Return the square root
 */
int _search_sqrt(int x, int a, int b)
{
float mid;
if (a <= b)
{
mid = (a + b) / 2;
if (mid * mid == x)
{
return (mid);
}
else if (mid * mid < x)
{
return (_search_sqrt(x, mid + 1, b));
}
else
{
return (_search_sqrt(x, a, mid - 1));
}
}
return (-1);
}

/**
 * _sqrt_recursion - Function name
 * @n: Parameter 1
 * Description: 'Function full description'
 * Return: Return the square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (0);
}
if (n == 1)
{
return (1);
}
return (_search_sqrt(n, 0, n));
}
