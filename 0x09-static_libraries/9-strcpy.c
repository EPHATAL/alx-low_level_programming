#include "main.h"
/**
*char *_strcpy - string pointed to by src
*@dest: copy to
*@src: copy from
*Return: string value
*/
char *_strcpy(char *dest, char *src)
{
int t = 0;
int d = 0;

while (*(src + t) != '\0')
{
t++;
}
for ( ; d < t ; d++)
{
dest[d] = src[d];
}
dest[t] = '\0';
return (dest);
}
