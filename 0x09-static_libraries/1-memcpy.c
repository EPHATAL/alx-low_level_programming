#include "main.h"

/**
*_memcpy - copies memory area
*@dest: stored memory
*@src: copied memory
*@n: number of bytes
*
*Return: copied memory with a byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int t = 0;
int d = n;

for (; t < d; t++)
{
dest[t] = src[t];
n--;
}
return (dest);
}
