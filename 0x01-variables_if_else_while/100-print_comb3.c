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
for(i = 48; i < 58; i++)
{
for(j = i; j < 58; j++)
{
putchar(i);
putchar(j);
if(i != 57 && j !=58)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}