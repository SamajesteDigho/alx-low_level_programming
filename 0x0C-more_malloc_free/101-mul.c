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
if (check_only_numbers(argv[1]) == -1)
{
printf("Error\n");
exit(98);
}
if (check_only_numbers(argv[2]) == -1)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[2]);

printf("%li\n", a *b);
return (0);
}

/**
 * check_only_numbers - Function Name
 * @str: Number of parameters
 * Description: Check if a string is essentially a number
 * Return: Always 1 or -1.
 */
int check_only_numbers(char *str)
{
unsigned int size, i;
size = strlen(str);
for (i = 0; i < size; i++)
{
if (str[i] < '0' || str[i] > '9')
{
return (-1);
}
}
return (1);
}
