#include "main.h"
/**
 * read_textfile - Function name
 * @filename: Path to the file
 * @letters: The number of letters to read
 * Description: This function reads some characters
 * Return: The number of written characters
 */
size_t read_textfile(const char *filename, size_t letters)
{
FILE *fp;
char c;
size_t count;
if (filename == NULL)
{
return (0);
}
fp = fopen(filename, "r");
if (fp == NULL)
{
return (0);
}
count = 0;
c = fgetc(fp);
while (letters > 0 && c != EOF)
{
fprintf(stdout, "%c", c);
count++;
letters--;
c = fgetc(fp);
}
fclose(fp);
return (count);
}
