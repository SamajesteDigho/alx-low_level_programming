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
from = fopen(argv[1], "r");
if (from == NULL && (access(argv[1], F_OK) != 0))
{
printf("Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (access(argv[2], F_OK) == 0) {
to = fopen(argv[2], "w");
}
else {
to = fopen(argv[2], "w");
chmod(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
}
if (to == NULL)
{
printf("Error: Can't write to %s\n", argv[2]);
exit(99);
}
while (!feof(from))
{
fgets(buffer, 1024, from);
fputs(buffer, to);
}
if (fclose(to) == -1)
{
printf("Error: Can't close fd  %d for to\n", errno);
exit(100);
}
if (fclose(from) == -1)
{
printf("Error: Can't close fd %d for from\n", errno);
exit(100);
}
return (0);
}
