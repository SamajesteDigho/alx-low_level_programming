#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * main - string length
 * Description: Describing the function
 * Return: Always return 0
 */

int main(void)
{
int i, nb;
char* pass;
time_t t;
srand((unsigned) time(&t));
nb = (rand() % 20) + 5;
pass = malloc(sizeof(char) * nb);
for (i = 0; i < nb; i++)
{
pass[i] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ !.*-_+0123456789"[rand() % 43];
}
printf("Tada! Congrats");
return (0);
}
