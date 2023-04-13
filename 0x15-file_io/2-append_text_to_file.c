#include "main.h"
/**
 * append_text_to_file - Function name
 * @filename: Path to the file
 * @letters: The number of letters to read
 * Description: This function reads some characters
 * Return: The number of written characters
 */
int append_text_to_file(const char *filename, char *text_content)
{
FILE *fp;
if (filename == NULL)
{
return (-1);
}
if (access(filename, F_OK) == 0)
{
if (text_content == NULL)
{
return (-1);
}
return (-1);
}
fp = fopen(filename, "a+");
if (fp)
{
if (text_content == NULL)
{
return (1);
}
fputs(text_content, fp);
return (1);
}
return (-1);
}
