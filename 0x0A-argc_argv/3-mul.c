#include <stdio.h>
#include "main.h"

/**
*_atoi - string to an integer
*@s: string
*
*Return: int converted from the string
*/

int _atoi(char *s)
{
int i, d, h, len, f, digit;

i = 0;
d = 0;
h = 0;
f = 0;
len = 0;
digit = 0;

while (s[len] != '\0')
len++;

while (i < len && f == 0)
{
if (s[i] == '-')
++d;

if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
h = h * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}

if (f == 0)
return (0);

return (h);
}

/**
*main - two numbers multiplies
*@argc: arguments number
*@argv: arguments array
*
*Return: Always 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int result, num1, num2;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 *num2;

printf("%d\n", result);

return (0);
}
