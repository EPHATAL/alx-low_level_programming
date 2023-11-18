#include "main.h"
#include <stdlib.h>

/**
*count_word - count number of words in a string
*@s: evaluate string
*Return: number of words
*/
int count_word(char *s)
{
int flag, t, d;

flag = 0;
d = 0;
for (t = 0; s[t] != '\0'; t++)
{
if (s[t] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
d++;
}
}
return (d);
}

/**
* **strtow - string into words
*@str: split string
*
*Return: array of strings (Success)
*or NULL (Error)
*/

char **strtow(char *str)
{
char **matrix, *tmp;
int t, d = 0, len = 0, words, c = 0, start, end;

while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);

matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);

for (t = 0; t <= len; t++)
{
if (str[t] == ' ' || str[t] == '\0')
{
if (c)
{
end = t;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[d] = tmp - c;
d++;
c = 0;
}
}
else if (c++ == 0)
start = t;
}

matrix[d] = NULL;

return (matrix);
}
