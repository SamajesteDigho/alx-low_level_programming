#include "main.h"
/**
 * comparer - Function name
 * @s1: Parameter 1
 * @s2: Parameter 2
 * @p1: Parameter 1
 * @p2: Parameter 2
 * Description: 'Function full description'
 * Return: Return 0 or 1
 */
int comparer(char *s1, char *s2, int p1, int p2)
{
if (s1[p1] == '\0' && s2[p2] == '\0')
{
return (1);
}
if (s1[p1] == s2[p2])
{
return (comparer(s1, s2, p1 + 1, p2 + 1));
}
if (s2[p2] == '*')
{
/*printf("* Detected\n");*/
if (s2[p2 + 1] == '*')
{
return (comparer(s1, s2, p1, p2 + 1));
}
else
{
if (s1[p1 + 1] == s2[p2 + 1])
{
return (comparer(s1, s2, p1 + 1, p2 + 1));
}
else if(s1[p1 + 1] == '\0')
{
if (s2[p2 + 1] != '\0')
{
return (1);
}
return (comparer(s1, s2, p1, p2 + 1));
}
else
{
return (comparer(s1, s2, p1 + 1, p2));
}
}
}
return (0);
}

/**
 * wildcmp - Function name
 * @s1: Parameter 1
 * @s2: Parameter 2
 * Description: 'Function full description'
 * Return: Return 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
return (comparer(s1, s2, 0, 0));
}
