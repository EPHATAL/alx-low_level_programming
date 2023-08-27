#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (success)
*/

int main(void)
{
int i;

for (i = 0; i < 10 || i < 'g'; i++)
{
if (i + 10)
putchar(i + '0');
else
putchar(i);
}
putchar('\n');
return (0);
}
