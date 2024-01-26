#include "main.h"
/**
 * print_sign - Sign of number
 *
 * @n: n is the parameter
 *
 * Description: A program that prints the alphabet
 *
 * Return: Either -1 or 0 or 1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
_putchar('-');
return (-1);
}
