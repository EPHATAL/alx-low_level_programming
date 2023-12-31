#include <stdio.h>
#include <stdlib.h>

/**
*main - minimum number of coins to
*make change for an amount of money
*@argc: arguments number
*@argv: arguments array
*
*Return: Always 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])
{
int num, t, result;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

num = atoi(argv[1]);
result = 0;

if (num < 0)
{
printf("0\n");
return (0);
}

for (t = 0; t < 5 && num >= 0; t++)
{
while (num >= coins[t])
{
result++;
num -= coins[t];
}
}
printf("%d\n", result);
return (0);
}
