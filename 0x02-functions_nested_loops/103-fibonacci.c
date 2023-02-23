#include "main.h"
#include <stdio.h>
/**
 * main - print last digit
 * Description: A program that prints the alphabet
 * Return: Always return 0.
 */
int main(void)
{
long int fb1, fb2, res;
fb1 = 1;
fb2 = 2;
res = fb1 + fb2;

printf("1, 2, %ld, ", res);
while (res <= 4000000)
{
fb1 = fb2;
fb2 = res;
res = fb1 + fb2;
if (res % 2 == 0)
{
if (res < 4000000)
{
putchar(',');
putchar(' ');
}
printf("%ld", res);
}
}
printf("\n");
return (0);
}