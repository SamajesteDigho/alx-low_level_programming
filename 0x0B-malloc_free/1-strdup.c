#include <string.h>
#include "main.h"
/**
 * _strdup - Function name
 * @str: Parameter 1
 * Description: Here the description
 * Return: Returns pointer to a char
 */
char *_strdup(char *str)
{
int size, i;
char *res;
if (str == NULL)
{
return (NULL);
}
size = strlen(str);
res = malloc(size *sizeof(char) + 1);
if (res == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
res[i] = str[i];
}
return (res);
}
