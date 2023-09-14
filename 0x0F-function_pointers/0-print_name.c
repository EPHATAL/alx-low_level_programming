#include "function_pointers.h"

/**
*print_name - a name
*@name: printed name
*@f: function
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
