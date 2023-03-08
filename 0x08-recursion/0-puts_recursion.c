#include "main.h"
/**
 * _puts_recursion - Function name
 * @s : Parameter 1
 * Description : Function full description
 */
void _puts_recursion(char *s)
{
if (*s == '\0' || *s == '\n')
{
putchar('\n');
}
else
{
putchar(*s);
_puts_recursion((s+1));
}
}
