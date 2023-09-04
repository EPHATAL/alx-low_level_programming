#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_strdup - new memory space location duplicate
*@str: char
*Return: 0
*/
char *_strdup(char *str)
{
char *aaa;
int t, d = 0;

if (str == NULL)
return (NULL);

t = 0;
while (str[t] != '\0')
t++;

aaa = malloc(sizeof(char) * (t + 1));

if (aaa == NULL)
return (NULL);

for (d = 0; str[d]; d++)
aaa[d] = str[d];

return (aaa);
}
