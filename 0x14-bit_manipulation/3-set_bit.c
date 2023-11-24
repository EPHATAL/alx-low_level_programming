#include "main.h"

/**
*set_bit - set value
*
*@n: pointer
*@index: index
*
*Return: 1 if it worked, -1 if it didn't.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int t;

if (index > 63)
return (-1);

t = 1 << index;
*n = (*n | t);

return (1);
}
