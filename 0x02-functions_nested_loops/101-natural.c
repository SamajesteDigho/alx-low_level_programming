#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print last digit
 * @n : parameter
 * Description: A program that prints the alphabet
 */

int main()
{
int i, res;
for (i = 0; i <= 1024; i++)
{
if (is_multiple_of_3_or_5(i) == 1)
{
res += i;
}
}
printf("%d\n", res);
return (0);
}

int is_multiple_of_3_or_5(int n)
{
if (n % 3 == 0 || n % 5 == 0)
{
return 1;
}
return 0;
}