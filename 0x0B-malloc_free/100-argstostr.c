#include <string.h>
#include "main.h"
/**
 * argstostr - Function name
 * @ac: Parameter 1
 * @av: Parameter 2
 * Description: Here the description
 * Return: Characters
 */
char *argstostr(int ac, char **av)
{
char *res;
int i, j, k, s_size, t_size;
if (ac == 0 || av == NULL)
{
return (NULL);
}
t_size = 0;
for (i = 1; i < ac; i++)
{
t_size += strlen(av[i]);
}
res = (char *) malloc(t_size *sizeof(char) + (2 * (ac + 1)));
i = 0;
for (j = 1; j < ac; j++)
{
s_size = strlen(av[j]);
for (k = 0; k < s_size; k++)
{
res[i++] = av[j][k];
}
res[i++] = '\\';
res[i++] = 'n';
}
return (res);
}
