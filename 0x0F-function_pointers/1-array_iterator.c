#include "function_pointers.h"

/**
*arry_iterator - parameter on each element of an array
*@array: array
*@size: size
*@action: pointer to the function to be executed.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;

while (size-- > 0)
{
action(*array);
array++;
}
}
