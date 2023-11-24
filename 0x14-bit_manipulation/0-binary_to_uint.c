#include "main.h"

/**
*binary_to_unit - function converts a binary number
*to an unsigned int.
*
*@b: pointer to string
*
*Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
int t;
unsigned int td;

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
td <<= 1;
if (b[t] == '1')
td += 1;
}
return (td);
}
