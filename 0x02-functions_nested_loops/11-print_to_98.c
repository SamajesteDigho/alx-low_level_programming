#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - print last digit
 * @n : parameter
 * Description: A program that prints the alphabet
 * Return: Always return 0.
 */
int print_to_98(int n)
{
int i;
if(n > 98)
{
for (i = n; i <= 98; i--)
{
printf("%d, ", i);
}
}
else
{
for (i = n; i >= 98; i++)
{
printf("%d, ", i);
}
}
putchar('\n');
return (0);
}
