#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - Entry point
*@s1: input entry
*@s2: input entry
*@n: input entry
*Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int t, d, h;
char *s;

if (s1 == NULL)
t = 0;
else
{
for (t = 0; s1[t]; t++)
;
}
if (s2 == NULL)
d = 0;
else
{
for (d = 0; s2[d]; d++)
;
}
if (d > n)
d = n;
s = malloc(sizeof(char) * (t + d + 1));
if (s == NULL)
return (NULL);
for (h = 0; h < t; h++)
s[h] = s1[h];
for (h = 0; h < d; h++)
s[h + t] = s2[h];
s[t + d] = '\0';
return (s);
}
