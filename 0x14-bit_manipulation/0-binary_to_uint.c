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
int t, base_two;
unsigned int td;

td = 0;
if (!b)
return (0);
for (t = 0; b[t] != '\0'; t++)
	;
for (t--, base_two = 1; t >= 0; t--, base_two *= 2)
{
if (b[t] != '0' && b[t] != '1')
{
return (0);
}
if (b[t] & 1)
{
td += base_two;
}
}
return (td);
}
