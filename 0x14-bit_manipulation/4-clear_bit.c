#include "main.h"

/**
*clear_bit - sets the value
*
*@n: pointer
*
*@index: index
*
*Reurn: 1 if it worked, -1 if it didn't.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
