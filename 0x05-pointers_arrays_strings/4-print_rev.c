#include "main.h"
/**
 * print_rev - string length
 * @s : parameter
 * Description: Describing the function
 */
void print_rev(char *s)
{
int i, j;
i = strlen(s);
for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
