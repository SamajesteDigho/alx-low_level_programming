#include "main.h"
/**
 * string_toupper - resetting
 * @s : parameter
 * Description: Describing the function
 * Return: Return a string
 */
char *string_toupper(char *s)
{
int i, j;
j = strlen(s);
for (i = 0; i < j; i++)
{
if (s[i] >= 97 && s[i] <= 122)
{
s[i] = 65 + (s[i] - 97);
}
{
s[i] = s[i];
}
}
return s;
}
