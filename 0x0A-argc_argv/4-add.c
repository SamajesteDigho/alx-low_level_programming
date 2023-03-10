#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _has_no_character - Helper function
 * @s: Argument 1
 * Description: Function description
 * Return: Always return 0 or 1.
 */
int _has_no_character(char *s)
{
int i, a;
a = strlen(s);
for (i = 0; i < a; i++)
{
if(s[i] < 48 || s[i] > 57)
{
return (1);
}
}
return (0);
}

/**
 * main - Entry point
 * @argc: Argument 1
 * @argv: Argument 2
 * Description: Main function description
 * Return: Always return 0.
 */
int main(int argc, char **argv)
{
int i, sum;
sum = 0;
for (i = 1; i < argc; i++)
{
if (_has_no_character(argv[i]) == 1)
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
