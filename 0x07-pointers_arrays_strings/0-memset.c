#include "main.h"
/**
 * _memset - Function name
 * @s: Parameter 1
 * @b: Parameter 2
 * @n: Parameter 3
 * Description: Function description
 * Return: Return value is char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
