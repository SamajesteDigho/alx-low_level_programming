#include "main.h"
#include <stdio.h>
/**
 * main - print last digit
 * Description: A program that prints the alphabet
 * Return: Always return 0.
 */
int main(void)
{
long int fb1, fb2, res, final;
fb1 = 1;
fb2 = 1;
res = 0;
final = 0;
while (res <= 4000000)
{
res = fb1 + fb2;
if (res % 2 == 0)
{
final += res;
}
fb1 = fb2;
fb2 = res;
}
printf("%ld\n", final);

return (0);
}
