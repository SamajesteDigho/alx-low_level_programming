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
if(n >= 0){
i = 48 + (n % 10);
_putchar(i);
}
else{
i = 48 + ((n * -1) % 10);
_putchar(i);
}
return (i);
}
