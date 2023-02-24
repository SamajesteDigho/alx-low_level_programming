#include "main.h"
/**
 * print_line : Short description
 * @n: Function parameter
 * Description : Fonction full description
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i <= n; i++)
{
_putchar(95);
}
_putchar('\n');
}
