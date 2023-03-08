#include "main.h"
/**
 * comparer - Function name
 * @s1: Parameter 1
 * @s2: Parameter 2
 * @p1: Parameter 1
 * @p2: Parameter 2
 * Description: 'Function full description'
 * Return: Return 0 or 1
 */
int comparer(char *s1, char *s2, int p1, int p2)
{
    if (s1[p1] == '\0')
    {
        if (s2[p2] == '\0')
        {
        return (1);
        }
        return (0);
    }
    if (s1[p1] == s2[p2])
    {
        return (comparer(s1, s2, p1 + 1, p2 + 1));
    }
    if (s2[p2] == '*')
    {
    /*printf("* Detected\n");*/
        if (s2[p2 + 1] == '*')
        {
            return (comparer(s1, s2, p1, p2 + 1));
        }
        else
        {
            if (s1[p1 + 1] == s2[p2 + 1])
            {
                return (comparer(s1, s2, p1 + 1, p2 + 1));
            }
            else if(s1[p1 + 1] == '\0')
            {
                if (s2[p2 + 1] != '\0')
                {
                    return (1);
                }
                return (comparer(s1, s2, p1, p2 + 1));
            }
            else
            {
                return (comparer(s1, s2, p1 + 1, p2));
            }
        }
    }
    return (0);
}

/**
 * wildcmp - Function name
 * @s1: Parameter 1
 * @s2: Parameter 2
 * Description: 'Function full description'
 * Return: Return 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
return (comparer(s1, s2, 0, 0));
}


int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    return (0);
}