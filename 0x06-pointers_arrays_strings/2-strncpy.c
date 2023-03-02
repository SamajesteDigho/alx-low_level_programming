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
int i, end;
end = strlen(src);
if (n <= end)
{
end = n;
}
for (i = 0; i < end; i++)
{
dest[i] = src[i];
}
if (n > end)
{
dest[i] = '\0';
}
return (dest);
}
