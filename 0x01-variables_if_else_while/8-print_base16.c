#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (success)
*/

int main(void)
{
char c;

int i;

c = 'a';
i = 0;
while (i < 10)
{
putchar(i + '0');
i++;
}
while
(c <= 'f')
{
putchar(c);
(c++);
}
putchar('\n');
return (0);
}
