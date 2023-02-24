#include "main.h"
/**
 * print_diagonal : Short description
 * @n: Function parameter
 * Description : Fonction full description
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
for (j = 0; j <= i; j++)
{
if (j == i)
{
_putchar(92);
}
else
{
_putchar(32);
}
}
_putchar('\n');
}
}
