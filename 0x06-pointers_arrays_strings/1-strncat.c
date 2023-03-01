#include "main.h"
/**
 * _strncat - resetting
 * @dest : parameter
 * @src : parameter
 * @n : parameter
 * Description: Describing the function
 * Return: Pointer
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, k, start;
k = strlen(src);
if (k < n)
{
i = strlen(dest) + k;
}
else
{
i = strlen(dest) + n;
}
start = strlen(dest);
for (j = start; j < i; j++)
{
dest[j] = src[j - start];
}
return (dest);
}
