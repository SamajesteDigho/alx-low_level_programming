#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: List of arguments
 * Description: Generate key and print
 * Return: 1 if succeed or exit
*/
int main(int argc, char **argv)
{
/*char a[10], c[10], d;*/
int str_len, i, j;
char *name, *key;
if (argc < 2)
{
printf("Usage: %s <username>\n", argv[0]);
exit(98);
}
name = argv[1];
str_len = strlen(name);
key = (char *) malloc(str_len * sizeof(char));
j = 0;
for(i = str_len - 1; i >= 0; i--)
{
key[j] = name[i] + i;
j++;
}
printf("%s\n", key);
free(key);
return (0);
}
