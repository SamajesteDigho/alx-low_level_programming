#include "main.h"
/**
 * puts_half - string length
 * @str : parameter
 * Description: Describing the function
 */
void puts_half(char *str)
{
int i, j, k;
i = strlen(str) / 2;
k = strlen(str);
for (j = i; j < k; j++)
{
putchar(str[j]);
}
putchar('\n');
}
