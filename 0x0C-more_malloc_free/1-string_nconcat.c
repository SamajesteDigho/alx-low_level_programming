#include <string.h>
#include "main.h"
/**
 * string_nconcat - Function name
 * @s1: Parameter 1
 * @s2: Parameter n
 * @n: Parameter 3
 * Description: Here the description
 * Return: A pointer on a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int a, b, size, i, end;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
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
p = malloc(size *sizeof(char) + 1);
if (p)
{
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
return (NULL);
}


int main(void)
{
	char *s;

	s = string_nconcat("Hello", NULL, 12);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	s = string_nconcat(NULL, "Hello", 0);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	s = string_nconcat(NULL, NULL, 10);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}