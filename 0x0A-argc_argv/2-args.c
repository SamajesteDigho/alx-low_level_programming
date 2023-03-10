#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Argument 1
 * @argv: Argument 2
 * Description: Main function description
 * Return: Always return 0.
 */
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
