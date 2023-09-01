#include "main.h"

/**
*_strpbrk - String for any of a set of bytes.
*
*@s: String to be searched.
*
*@accept: set of bytes to be seached for.
*
*Return: If a set is matched - a pointer to the matched byte.
*If no set is matched - NULL.
*/
char *_strpbrk(char *s, char *accept)
{
int index;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}
s++;
}
return ('\0');
}
