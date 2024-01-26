#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Prints all the numbers of base 16 in lowercase.'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 48; i < 64; i++)
{
if (i <= 57)
{
putchar(i);
}
else
{
putchar(96 + (i - 57));
}
}
putchar('\n');
return (0);
}
