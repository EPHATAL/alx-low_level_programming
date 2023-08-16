#include "main.h"
/**
*times_table - Prints the 9 times table, starting with 0
*Return: empty output
*/

void times_table(void)

{


int t, w, x, y, z;

for (t = 0; t <= 9; t++)
{
for (w = 0; w <= 9; w++)
{
x = t * w;
if (x > 9)
{
y = x % 10;
z = (x - y) / 10;
_putchar(44);
_putchar(32);
_putchar(z + '0');
_putchar(y + '0');
}
else
{
if (w != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(x + '0');
}
}
_putchar('\n');
}
}
