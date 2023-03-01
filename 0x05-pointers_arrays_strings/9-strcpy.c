#include "main.h"
/**
 * _strcpy - string length
 * @dest : parameter
 * @src : parameter
 * Description: Describing the function
 * Return: Array recopied
 */
char *_strcpy(char *dest, char *src)
{
int i, j;
i = strlen(src);
memset(dest, 0, strlen(dest));
for (j = 0; j < i; j++)
{
dest[j] = src[j];
}
return (dest);
}
