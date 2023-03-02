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
int i;
for (i = 0; i < (n / 2); i++)
{
c = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = c;
}
}
