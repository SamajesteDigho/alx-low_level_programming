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


int main(void)
{
    char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}