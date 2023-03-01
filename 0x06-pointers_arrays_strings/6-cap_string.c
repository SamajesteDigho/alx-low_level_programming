#include "main.h"
/**
 * cap_string - resetting
 * @s : parameter
 * Description: Describing the function
 * Return: Return a string
 */
char *cap_string(char *s)
{
int i, j;
j = strlen(s);
for (i = 0; i < j; i++)
{
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
{
if (s[i + 1] > 97 && s[i + 1] < 122)
{
s[i + 1] = 65 + (s[i + 1] - 97);
i++;
}
}
else
{
s[i] = s[i];
}
}
return (s);
}
