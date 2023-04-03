#include <string.h>
#include "main.h"
/**
 * string_nconcat - Function name
 * @s1: Parameter 1
 * @s2: Parameter 1
 * @n: Parameter 1
 * Description: Here the description
 * Return: A pointer on a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int a, b, size, i, end;
a = strlen(s1);
b = strlen(s2);
if (n < b)
{
end = n;
}
else
{
end = b;
}
size = a + end;
p = malloc(size * sizeof(char) + 1);
for (i = 0; i < size; i++)
{
p[i] = s1[i];
}
for (i = 0; i < end; i++)
{
p[a + i] = s2[i];
}
p[size] = '\0';
return (p);
}
