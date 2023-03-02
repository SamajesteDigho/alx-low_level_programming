#include "main.h"
/**
 * reverse_array - resetting
 * @a : parameter
 * @n : parameter
 * Description: Describing the function
 */
void reverse_array(int *a, int n)
{
char c;
int i, j;
j = n / 2;
for (i = 0; i < j; i++)
{
c = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = c;
}
}
