#include "main.h"

/**
*_memset - A block of memory with a specification
*@s: Memory to be filled
*@b: Desired value
*@n: bytes to be changed
*
*Return: array with new value for a bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
int q = 0

for (; n > 0; q++)
{
s[q] = b;
n--;
}
return (s);
}
