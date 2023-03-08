#include "main.h"
/**
 * _strstr - Function name
 * @haystack: Parameter 1
 * @needle: Parameter 2
 * Description: Function description
 * Return: Return value is char pointer
 */
char *_strstr(char *haystack, char *needle)
{
int i, n1, j, n2, pb;
char *p;
n1 = strlen(haystack);
n2 = strlen(needle);
pb = 0;
p = NULL;
if (strlen(needle) == 0)
{
return (haystack);
}
for (i = 0; i < n1; i++)
{
if (haystack[i] == needle[0] && (n1 - i) >= n2)
{
p = &haystack[i];
for (j = 0; j < n2; j++)
{
if (haystack[i + j] == needle[j])
{
pb = 1;
}
else
{
pb = 0;
p = NULL;
break;
}
}
if (pb == 1)
{
break;
}
}
}
return (p);
}


int main(void)
{
	char *s = "First, solve the problem. Then, write the code.";
	char *f = "";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", (t == NULL ? "nil" : t));
	return (0);
}