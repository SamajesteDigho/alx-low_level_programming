#include "main.h"
/**
 * _strpbrk - Function name
 * @s: Parameter 1
 * @accept: Parameter 2
 * Description: Function description
 * Return: Return value is char pointer
 */
char *_strpbrk(char *s, char *accept)
{
int i, n1, j, n2;
n1 = strlen(s);
n2 = strlen(accept);
for (i = 0; i < n1; i++)
{
for (j = 0; j < n2; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
}
return (NULL);
}
