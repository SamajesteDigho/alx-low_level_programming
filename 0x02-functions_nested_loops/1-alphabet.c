#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'A program tat prints _putchar'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for(i = 97; i < 123; i++)
{
print_alphabet();
}
_putchar('\n');
return (0);
}
