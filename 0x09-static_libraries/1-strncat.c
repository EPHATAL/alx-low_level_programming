#include "main.h"

/**
*_strncat - concatenate two string
*using at most n bytes from arc
*@dest: entered value
*@src: entered value
*@n: enter value
*
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int t;
int d;

t = 0;
while (dest[t] != '\0')
{
t++;
}
d = 0;
while (d < n && src[d] != '\0')
{
dest[t] = src[d];
t++;
d++;
}
dest[t] = '\0';
return (dest);
}
