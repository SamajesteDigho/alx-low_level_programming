#include "main.h"
/**
 * _strchr - Function name
 * @s: Parameter 1
 * @c: Parameter 2
 * Description: Function description
 * Return: Return value is char pointer
 */
char *_strchr(char *s, char c)
{
int i;
i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (&s[i]);
}
i++;
}
return (NULL);
}
