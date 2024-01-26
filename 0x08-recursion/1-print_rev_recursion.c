#include "main.h"
/**
 * read_from_pos - Function name
 * @s: Parameter 1
 * @pos: Parameter 2
 * Description: 'Function full description'
 */
void read_from_pos(char *s, int pos)
{
if (pos == 0 || s[pos] == '\n')
{
putchar('\n');
}
else
{
putchar(s[pos]);
read_from_pos(s, pos - 1);
}
}

/**
 * _print_rev_recursion - Function name
 * @s: Parameter 1
 * Description: 'Function full description'
 */
void _print_rev_recursion(char *s)
{
int a;
a = strlen(s) - 1;
if (a > 0)
{
read_from_pos(s, a);
}
}
