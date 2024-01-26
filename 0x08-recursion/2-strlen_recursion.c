#include "main.h"
/**
 * _strlen_recursion - Function name
 *
 * Description: 'Function full description'
 * @s: Parameter 1
 *
 * Return: Return the string length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0' || *s == '\n')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
