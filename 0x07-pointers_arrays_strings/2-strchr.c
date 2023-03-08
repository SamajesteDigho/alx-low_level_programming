#include "main.h"
/**
 * _strchr - Function name
 * @s: Parameter 1
 * @c: Parameter 2
 * Description: 'Function description'
 * Return: Return value is char pointer
 */
char *_strchr(char *s, char c)
{
int i, a;
a = strlen(s);
for (i = 0; i <= a; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (NULL);
}
