#include "main.h"
/**
 * print_array - string length
 * @a : parameter
 * @n : parameter
 * Description: Describing the function
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i + 1 != n)
{
printf(", ");
}
}
putchar('\n');
}
