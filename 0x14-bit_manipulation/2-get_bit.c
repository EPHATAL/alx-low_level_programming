#include "main.h"

/**
*get_bit - returnsthe value
*
*@n: input
*
*@index: index of the bit.
*
*Return: Value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int t;
if (n == 0 && index < 64)
return (0);
for (t = 0; t <= 63; n >>= 1, t++)
{
if (index == t)
{
return (n & 1);
}
}
return (-1);
}
