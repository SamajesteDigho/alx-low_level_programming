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
argv[0] = argv[0];
printf("%d\n", argc - 1);
return (0);
}
