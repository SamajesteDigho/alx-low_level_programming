#include "main.h"
/**
 * print_to_98 - print last digit
 * @n : parameter
 * Description: A program that prints the alphabet
 * Return: Always return 0.
 */
int print_to_98(int n)
{
int i;
for(i = n; i < 99)
{
_putchar(48 + i);
_putchar(',');
_putchar(' ');
}
return (0);
}
