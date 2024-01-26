#include "main.h"
/**
 * rev_string - string length
 * @s : parameter
 * Description: Describing the function
 */
void rev_string(char *s)
{
char n;
int i, j;
i = strlen(s);
for (j = 0; j < i / 2; j++)
{
n = s[i - j - 1];
s[i - j - 1] = s[j];
s[j] = n;
}
}
