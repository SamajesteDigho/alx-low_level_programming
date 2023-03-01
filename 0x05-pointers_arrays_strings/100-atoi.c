#include "main.h"
/**
 * _atoi - string length
 * @s : parameter
 * Description: Describing the function
 * Return: Returning an int
 */
int _atoi(char *s)
{
int i, l, a, b, isn;
double n;
l = strlen(s);
a = 0;
b = 0;
n = 0;
isn = 0;
for (i = 0; i < l; i++)
{
if (s[i - 1] == '-')
{
isn++;
}
if (s[i] >= 48  && s[i] <= 57)
{
n = (n * 10) + (s[i] - 48);
b++;
a = 1;
}
else
{
if (a != 0)
{
break;
}
}
}

if (isn % 2 == 1)
{
n *= -1;
}
return (n);
}
