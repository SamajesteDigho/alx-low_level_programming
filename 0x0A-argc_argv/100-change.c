#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: Parameter 1
 * @argv: Parameter 2
 * Description: Program description
 * Return: Always return 0.
 */
int main(int argc, char **argv)
{
int amt, nbc, tnc;
if (argc != 2)
{
printf("Error\n");
return (1);
}
amt = atoi(argv[1]);
tnc = 0;
nbc = 0;
if (amt < 0)
{
printf("0\n");
return (0);
}
nbc = max_nb_coins(amt, 25);
tnc += nbc;
amt -= nbc * 25;

nbc = max_nb_coins(amt, 10);
tnc += nbc;
amt -= nbc * 10;

nbc = max_nb_coins(amt, 5);
tnc += nbc;
amt -= nbc * 5;

nbc = max_nb_coins(amt, 2);
tnc += nbc;
amt -= nbc * 2;

nbc = max_nb_coins(amt, 1);
tnc += nbc;
amt -= nbc * 1;

printf("%d\n", tnc);

return (0);
}

/**
 * max_nb_coins - Breaking coin function
 * @amt: Parameter 1
 * @coin: Parameter 2
 * Description: Program description
 * Return: Always return 0.
 */
int max_nb_coins(int amt, int coin)
{
int a;
a = amt / coin;
return a;
}
