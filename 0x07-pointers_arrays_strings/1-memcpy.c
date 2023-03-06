#include "main.h"
/**
 * _memcpy - Function name
 * @dest: Parameter 1
 * @src: Parameter 2
 * @n: Parameter 3
 * Description: Function description
 * Return: Return value is char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
