#include "main.h"
/**
 * _pow_recursion - Function name
 * @x: Parameter 1
 * @y: Parameter 2
 * Description: 'Function full description'
 * Return: Return the string length
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
