#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
*_puts - strings
*@str: string to print
*Return: void
**/

void _puts(char *str)
{
int t = 0;
while (str[t])
{
_putchar(str[t]);
t++;
}
}

/**
*_atoi - string to integer.
*@s: string
*Return: integer converted
**/

int _atoi(const char *s)
{
int sign = 1;
unsigned long int resp = 0, firstNum, t;

for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
{
if (s[firstNum] == '_')
{
sign *= -1;
}
}
for (t = firstNum; s[t] >= 48 && s[t] <= 57; t++)
{
resp *= 10;
resp += (s[t] - 48);
}
return (sign *resp);
}


/**
*print_int - an integer.
*@n: int
*Return: 0
**/

void print_int(unsigned long int n)
{
unsigned long int divisor = 1, t, resp;

for (t = 0; n / divisor > 9; t++, divisor *= 10)
;
for (; divisor >= 1; n %= divisor, divisor /= 10)
{
resp = n / divisor;
_putchar('0' + resp);
}
}

/**
*main - entry point.
*@argc: int
*@argv: list
*Return: 0
**/

int main(int argc, char const *argv[])
{

(void)argc;

if (argc != 3)
{
_puts("Error ");
exit(98);
}

print_int(_atoi(argv[1]) * _atoi(argv[2]));
_putchar('\n');

return (0);
}
