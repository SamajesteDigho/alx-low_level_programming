#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: List of arguments
 * Description: Generate key and print
 * Return: 0 if succeed or exit
*/
int main(int argc, char **argv)
{
int str_len, i, j;
char *name, *key;
if (argc < 2)
{
printf("Usage: %s <username>\n", argv[0]);
exit(98);
}
name = argv[1];
str_len = strlen(name);
key = (char *) malloc((str_len + 1) *sizeof(char));
j = 0;
for (i = str_len - 1; i >= 0; i--)
{
key[j] = name[i] + i;
j++;
}
key[j] = 0;
printf("%s", key);
free(key);
return (0);
}
