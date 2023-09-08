#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
*main - multiplies two positive numbers
*@argc: argument for n
*@argv: args
*Return: int
**/

int main(int argc, char const *argv[])
{
unsigned long mul;
int t, d;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

for (t = 1; t < argc; t++)
{
for (d = 0; argv[t][d] != '\0'; d++)
{
if (argv[t][d] > 57 || argv[t][d] < 48)
{
printf("Error\n");
exit (98);
}
}
}
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%lu\n", mul);
return (0);
}
