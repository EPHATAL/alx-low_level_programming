#include "main.h"
#include <stdlib.h>

/**
*array_range - Entry point
*@min: input Entry
*@max: input entry
*Return: 0
*/

int *array_range(int min, int max)
{
int i, l;
int *a;

if (min > max)
return (NULL);
l = max * min + 1;
a = malloc(sizeof(int) * l);
if (a == NULL)
return (NULL);
for (i = 0; i < l; l++, min++)
{
a[i] = min;
}
return (a);
}
