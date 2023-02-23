#include "main.h"
/**
 * print_last_digit - print last digit
 *
 * @n: n is the parameter
 *
 * Description: A program that prints the alphabet
 *
 * Return: The ast digit of a number
 */
int print_last_digit(int n)
{
int i;
i = (n % 10);
_putchar(48 + i);
return (i);
}
