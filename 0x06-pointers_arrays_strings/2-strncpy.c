#include "main.h"
/**
 * _strncpy - resetting
 * @dest : parameter
 * @src : parameter
 * @n : parameter
 * Description: Describing the function
 * Return: Pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
