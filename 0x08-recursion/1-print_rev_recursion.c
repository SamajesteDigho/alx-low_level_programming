#include "main.h"
/**
 * _print_rev_recursion - Function name
 * @s : Parameter 1
 * Description : Function full description
 */
void _print_rev_recursion(char *s)
{
int a;
a = strlen(s) - 1;
if (a == 0)
{
putchar('\n');
}
else
{
putchar(s[a]);
memset(&s[a - 1], 0, 0);
_print_rev_recursion(s);
}
}

int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}