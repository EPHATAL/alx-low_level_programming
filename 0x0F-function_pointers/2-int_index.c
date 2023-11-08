#include "function_pointers.h"

/**
*int_index - searches for integer
*@array: the int array
*@size: the array size
*@cmp: the compare function
*
*Return: the integer index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int t = 0;

if (array && size && cmp)
while (t < size)
{
if (cmp(array[t]))
return (t);
t++;
}
return (-1);
}
