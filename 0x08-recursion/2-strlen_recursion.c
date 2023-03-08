#include "main.h"
/**
 * _strlen_recursion - Function name
 * @s : Parameter 1
 * Description : Function full description
 * Return : Return the string length
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
