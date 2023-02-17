#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Prints all possible different combinations of three digits'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;
for(i = 48; i < 58; i++)
{
for(j = i; j < 58; j++)
{
for(k = j; k < 58; k++)
{
if(i != j && i != k && j != k)
{
putchar(i);
putchar(j);
putchar(k);
if(i == 55 && j == 56 && k == 57)
{
}
else{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}