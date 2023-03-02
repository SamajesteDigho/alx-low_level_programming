#include "main.h"
/**
 * _strncmp - resetting
 * @s1 : parameter
 * @s2 : parameter
 * Description: Describing the function
 * Return: Pointer
 */
int _strcmp(char *s1, char *s2)
{
int l1, l2, i, j, score;
score = 0;
l1 = strlen(s1);
l2 = strlen(s2);
if (l1 <= l2)
{
j = l1;
}
else
{
j = l2;
}
for (i = 0; i < j; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (score);
}
