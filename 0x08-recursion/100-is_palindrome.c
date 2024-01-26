#include "main.h"
/**
 * palindrome_searcher - Function name
 * @s: Parameter 1
 * @p1: Parameter 2
 * @p2: Parameter 3
 * Description: 'Function full description'
 * Return: Return 0 or 1
 */
int palindrome_searcher(char *s, int p1, int p2)
{
if (p1 == p2 || p1 > p2)
{
return (1);
}
if (s[p1] == s[p2])
{
return (palindrome_searcher(s, p1 + 1, p2 - 1));
}
return (0);
}

/**
 * is_palindrome - Function name
 * @s: Parameter 1
 * Description: 'Function full description'
 * Return: Returns 0 or 1
 */
int is_palindrome(char *s)
{
int a;
a = strlen(s) - 1;
return (palindrome_searcher(s, 0, a));
}
