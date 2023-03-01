#include "main.h"
/**
 * leet - resetting
 * @s : parameter
 * Description: Describing the function
 * Return: Return a string
 */
char *leet(char *s)
{
int i, j, k;
char caps[5] = {'A', 'E', 'O', 'T', 'L'};
char lows[5] = {'a', 'e', 'o', 't', 'l'};
int digits[5]= {4, 3, 0, 7, 1};

j = strlen(s);

for (i = 0; i < j; i++)
{
for (k = 0; k < 5; k++)
{
if (s[i] == caps[k] || s[i] == lows[k])
{
s[i] = 48 + digits[k];
}
}
}
return (s);
}
