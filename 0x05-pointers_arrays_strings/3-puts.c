#include "main.h"
/**
 * _puts - string length
 * @str : parameter
 * Description: Describing the function
 */
void _puts(char *str)
{
int i, j;
i = strlen(str);
for (j = 0; j < i; j++)
{
putchar(str[j]);
}
putchar('\n');
}
