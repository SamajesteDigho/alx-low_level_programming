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
if(n >= 0){
return (n % 10);
}
return ((n * -1) % 10);
}
