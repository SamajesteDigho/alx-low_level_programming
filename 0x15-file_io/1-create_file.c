#include "main.h"
/**
 * create_file - Function name
 * @filename: File name
 * @text_content: Content to add to file
 * Description: This function reads some characters
 * Return: The number of written characters
 */
int create_file(const char *filename, char *text_content)
{
FILE *fp;
if (filename == NULL)
{
return (-1);
}
fp = fopen(strdup(filename), "w");
if (fp)
{
if (fputs(text_content, fp) != EOF)
{
fclose(fp);
chmod(filename, S_IRUSR | S_IWUSR);
return (1);
}
fclose(fp);
return (-1);
}
return (-1);
}
