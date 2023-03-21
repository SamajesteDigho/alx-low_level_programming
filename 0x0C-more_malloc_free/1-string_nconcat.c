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
unsigned int a, b, size, i;
a = strlen(s1);
b = strlen(s2);
if (b > n)
{
b = n;
}
size = a + b;
p = malloc(size);

if (p == NULL)
{
return (NULL);
}
for (i = 0; i < a; i++)
{
p[i] = s1[i];
}
for (i = 0; i < b; i++)
{
p[a + i] = s2[i];
}
p[size] = '\0';
return (p);
}


int main(void)
{
	char *s;

	s = string_nconcat("", "Hello", 12);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}