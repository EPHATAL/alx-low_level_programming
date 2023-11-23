#include "main.h"

/**
*binary_to_unit - function
*
*@b: pointer to string
*
*Return: unsigned int with decimal value of binary num, or 0 if error
*/
unsigned int binary_to_uint(const char *b)
{
int t;
unsigned int num;

num = 0;
if (!b)
return (0);
for (t = 0; b[t] != '\0'; t++)
{
if (b[t] != '0' && b[t] != '1')
return (0);
}
for (t = 0; b[t] != '\0'; t++)
{
num <<= 1;
if (b[t] == '1')
num += 1;
}
return (num);
}
