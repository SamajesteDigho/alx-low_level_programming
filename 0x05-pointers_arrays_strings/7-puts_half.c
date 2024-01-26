#include "main.h"
/**
 * puts_half - string length
 * @str : parameter
 * Description: Describing the function
 */
void puts_half(char *str)
{
int i, j, k;
i = strlen(str);
if (i % 2 == 0)
{
i = i / 2;
}
else
{
i = (i + 1) / 2;
}
k = strlen(str);
for (j = i; j < k; j++)
{
putchar(str[j]);
}
putchar('\n');
}
