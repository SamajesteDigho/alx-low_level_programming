#include "main.h"
/**
 * puts2 - string length
 * @str : parameter
 * Description: Describing the function
 */
void puts2(char *str)
{
int i, j;
i = strlen(str);
for (j = 0; j < i; j+=2)
{
putchar(str[j]);
}
putchar('\n');
}
