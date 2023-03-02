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
int i, j, end;
j = strlen(src);
if (n <= j)
{
end = n;
}
else
{
end = j;
}
for (i = 0; i < end; i++)
{
dest[i] = src[i];
}

if (n > j)
{
dest[i] = '\0';
}
return (dest);
}
