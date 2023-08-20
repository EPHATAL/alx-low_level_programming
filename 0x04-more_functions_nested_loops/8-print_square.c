#include "main.h"

/**
*print_square - prints size of a square
*@size: size of the square
*
*Return: void
*/

void print_square(int size)
{
int k, m;

if (size <= 0)
_putchar('\n');

for (k = 0; k < size; k++)
{
for (m = 0; m < (size); m++)
{
_putchar('#');
}
_putchar('\n');
}
}
