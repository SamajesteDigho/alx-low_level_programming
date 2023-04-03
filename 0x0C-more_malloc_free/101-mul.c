#include "main.h"
/**
 * main - Entry point
 * @argc: Number of parameters
 * @argv: Vector of arguments
 * Description: Multiply 2 parameters passed to the file
 * Return: Always 0.
*/
int main(int argc, char **argv)
{
long int a, b;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
if (a == 0 || b == 0)
{
printf("Error\n");
exit(98);
}
printf("%li\n", a *b);
return (0);
}
