#include "main.h"
/**
 * _strspn - Function name
 * @s: Parameter 1
 * @accept: Parameter 2
 * Description: Function description
 * Return: Return value is char pointer
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, n1, j, n2, l, pb;
n1 = strlen(s);
n2 = strlen(accept);
l = 0;
pb = 0;
for (i = 0; i < n1; i++)
{
for (j = 0; j < n2; j++)
{
if (s[i] == accept[j])
{
l++;
pb = 0;
break;
}
else
{
pb = 1;
}
}
if (pb == 1)
{
break;
}
}
return (l);
}
