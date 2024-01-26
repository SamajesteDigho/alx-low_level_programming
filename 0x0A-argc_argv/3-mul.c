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
if (argc < 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
