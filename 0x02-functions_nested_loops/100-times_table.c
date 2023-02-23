#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print last digit
 * @n : parameter
 * Description: A program that prints the alphabet
 */

void _putchar(int c)
{
putchar(c);
}

void print_times_table(int n)
{
int i, j;

if (n < 0 || n > 15)
{
_putchar('\n');
return ;
}
for (i = 0; i < n + 1 ; i++)
{
for (j = 0; j < n + 1 ; j++)
{
if (i * j >= 100)
{
int f = (i * j) / 100;
int s = ((i * j) - (f * 100)) / 10;
_putchar(48 + f);
_putchar(48 + s);
_putchar(48 + ((i * j) % 10));
}
else if (i * j >= 10)
{
_putchar(' ');
_putchar(48 + ((i * j) / 10));
_putchar(48 + ((i * j) % 10));
}
else
{
if (j != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(48 + ((i * j) % 10));
}
if (j != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}

int main()
{
print_times_table(98);
return (0);
}