#include <string.h>
#include "main.h"
/**
 * strtow - Function name
 * @str: Parameter 1
 * Description: Here the description
  * Return: Characters
 */
char **strtow(char *str)
{
char **res;
int s_size, nb_words, act, i;
s_size = strlen(str);
if (str == NULL || s_size == 0)
{
printf("Exitting \n");
return (NULL);
}
nb_words = 0;
act = 1;
i = 0;
for (i = 0; i < s_size; i++)
{
if (str[i] == ' ' && act == 0)
{
nb_words++;
act = 1;
}
if (str[i] != ' ')
{
act = 0;
}
}

printf("N° of spaces = %d\n", nb_words);
res = (char **) malloc(sizeof(char*) * (nb_words - 1));
j = 0;
for (i = 0; i < s_size; i++)
{
if (str[i] != ' ')
{

}
}


return (res);
}



void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}