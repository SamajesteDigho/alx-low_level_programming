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
long int fb1, fb2, res;
fb1 = 1;
fb2 = 2;

printf("1, 2, ");
for (i = 3; i < 50; i++)
{
res = fb1 + fb2;
printf("%ld, ", res);
fb1 = fb2;
fb2 = res;
}
printf("%ld\n", fb1 + fb2);
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
if (n == 0)
{
return (0);
}
if (n == 1 || n == 2)
{
return (1);
}
return (fibonacci(n - 1) + fibonacci(n - 2));
}
