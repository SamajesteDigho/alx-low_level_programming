#include "main.h"
/**
 * rot13 - resetting
 * @s : parameter
 * Description: Describing the function
 * Return: Return a string
 */
char *rot13(char *s)
{
int i, n;
n = strlen(s);
for (i = 0; i < n; i++)
{
if (s[i] >= 'A' && s[i] <= 'Z')
{
s[i] = 'A' + (s[i] - 'A' + 13) % 26;
}
else if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = 'a' + (s[i] - 'a' + 13) % 26;
}
}
return (s);
}
