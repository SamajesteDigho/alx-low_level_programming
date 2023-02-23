#include "main.h"
#include <stdio.h>
/**
 * main - print last digit
 * Description: A program that prints the alphabet
 * Return: Always return 0.
 */
int main(void)
{
int i;
printf("1, 2, ");
for(i = 3; i < 10; i++)
{
printf("%d, ", fibonacci(i));
}
printf("%d\n", fibonacci(50));
return (0);
}

/**
 * fibonacci - print last digit
 * @n: Parameter
 * Description: A program that prints the alphabet
 * Return: return a number.
 */
int fibonacci(int n)
{
if(n == 0)
{
return (0);
}
if(n == 1 || n == 2)
{
return (1);
}
return (fibonacci(n - 1) + fibonacci(n - 2));
}