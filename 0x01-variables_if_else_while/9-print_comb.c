#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Prints all possible combinations of single-digit numbers'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for(i = 48; i < 58; i++)
{
putchar(i);
if(i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}