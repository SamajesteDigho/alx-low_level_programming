#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Prints all possible different combinations of two digits'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 48; i < 58; i++)
{
for (j = i+1; j < 58; j++)
{
if (i != 48 || j != 49)
{
putchar(',');
putchar(' ');
}
putchar(i);
putchar(j);
}
}
putchar('\n');
return (0);
}

