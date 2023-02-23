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
double fb1, fb2, fbn;
fb1 = 0;
fb2 = 1;
for (i = 0; i < 98; i++)
{
fbn = fb1 + fb2;
printf("%.0f", fbn);
if (i != 97)
{
printf(", ");
}
fb1 = fb2;
fb2 = fbn;
}
printf("\n");
return (0);
}
