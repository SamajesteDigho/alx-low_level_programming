#include "main.h"
/**
 * _strcat - resetting
 * @dest : parameter
 * @src : parameter
 * Description: Describing the function
 * Return: Pointer
 */
char *_strcat(char *dest, char *src)
{
int i, j, start;
i = strlen(dest) + strlen(src);
start = strlen(dest);
for (j = start; j < i; j++)
{
dest[j] = src[j - start];
}
return (dest);
}
