#include "3-calc.h"
/**
 * main - Entry point of the function
 * @argc: Number of parameters
 * @argv: Array of parameters
 * Description: The main function for operations
 * Return: Always returns 0.
 */
int main(int argc, char *argv[])
{
int a, b;
int (*f)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
f = get_op_func(argv[2]);
if (f) {
printf("%d\n", f(a, b));
return (0);
}
else
{
printf("Error\n");
exit(99);
}
}
