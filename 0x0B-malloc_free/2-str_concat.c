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
a = strlen(s1);
b = strlen(s2);
size = a + b;
res = malloc(size * sizeof(*res));
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
