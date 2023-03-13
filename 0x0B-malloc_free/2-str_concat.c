#include <string.h>
#include "main.h"
/**
 * str_concat - Function name
 * @s2: Parameter 1
 * @s2: Parameter 2
 * Description: Here the description
 * Return: Returns pointer to a char
 */
char *str_concat(char *s1, char *s2)
{
char *res;
int i, a, b, size;
if (s1 == NULL)
{
a = 0;
}
else
{
a = strlen(s1);
}
if (s2 == NULL)
{
b = 0;
}
else
{
b = strlen(s2);
}
size = a + b;
res = malloc(size * sizeof(*res) + 1);
for (i = 0; i < a; i++)
{
res[i] = s1[i];
}
for (i = 0; i < b; i++)
{
res[a + i] = s2[i];
}
return (res);
}
