#include "main.h"
/**
*_strpbrk - entry point
*@s: input
*@accept: input
*Return: Always 0 (successs)
*/
char *_strpbrk(char *s, char *accept)
{
int d;

while (*s)
{
for (d = 0; accept[d]; d++)
{
if (*s == accept[d])
return (s)
}
s++;
}
return ('\0')
}
