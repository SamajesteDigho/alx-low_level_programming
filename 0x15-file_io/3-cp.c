#include "main.h"
/**
 * main - Entry point
 * @argc: Number of parameters
 * @argv: Vector containing parameter
 * Description: Main function
 * Return: Always returns (0)
 */
int main(int argc, char **argv)
{
FILE *from, *to;
char buffer[1024];
if (argc != 3)
{
printf("Usage: cp file_from file_to\n");
exit(97);
}
if (access(argv[1], F_OK) != 0)
{
printf("Error: Can't read from file %s\n", argv[1]);
exit(98);
}
to = fopen(argv[2], "w");
if (to == NULL)
{
printf("Error: Can't write to %s\n", argv[2]);
exit(99);
}
from = fopen(argv[1], "r");
while (!feof(from))
{
fgets(buffer, 1024, from);
fputs(buffer, to);
}
if (!fclose(from))
{
printf("Error: Can't close fd %d\n", errno);
}
if (!fclose(to))
{
printf("Error: Can't close fd  %d\n", errno);
}
return (0);
}
