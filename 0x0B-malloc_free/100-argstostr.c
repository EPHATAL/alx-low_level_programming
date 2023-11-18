#include "main.h"
#include <stdlib.h>

/**
*argstostr - main entry
*@ac: int input
*@av: array pointer double
*Return: 0
*/

char *argstostr(int ac, char **av)

{
int t, d, r = 0, l = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (t = 0; t < ac; t++)
{
for (d = 0; av[t][d]; d++)
l++;
}
l += ac;

str = malloc(sizeof(char) * l + 1);
if (str == NULL)
return (NULL);
for (t = 0; t < ac; t++)
{
for (d = 0; av[t][d]; d++)
{
str[r] = av[t][d];
r++;
}
if (str[r] == '\0')
{
str[r++] = '\n';
}
}
return (str);
}
