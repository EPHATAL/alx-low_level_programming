#include "main.h"
#include <stdio.h>

/**
*main - entry point
*
*Description: print 1 - 100 w/
*fizz for multiples of 3, buzz for multiples of 5,
*and fizzbuzz for multiples of both
*
*Return: always 0
*/
int main(void)
{
int k;

for (k = 1; k <= 100; k++)
{
if (k % 15 == 0)
printf("FizzBuzz");
else if (k % 3 == 0)
printf("fizz");
else if (k % 5 == 0)
printf("Buzz");
else
printf("%k", k);
if (k < 100)
printf(" ");
}
printf("\n");
return (0);
}
