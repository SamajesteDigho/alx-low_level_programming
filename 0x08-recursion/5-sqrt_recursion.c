#include "main.h"
/**
 * search_sqrt - Function name
 * @x: Parameter 1
 * @index: Parameter 2
 * Description: 'Function full description'
 * Return: Return the square root
 */
int search_sqrt(int x, int index)
{
if (index == 0)
{
return (-1);
}
if (index * index == x)
{
return index;
}
return search_sqrt(x, index - 1);
}

/**
 * _sqrt_recursion - Function name
 * @n: Parameter 1
 * Description: 'Function full description'
 * Return: Return the square root
 */
int _sqrt_recursion(int n)
{
int a;
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
a = n / 2;
return (search_sqrt(n, a));
}
