#include "main.h"

/**
*_strchr - Entry point
*@s: input value
*@c: input vlaue
*Return: Always 0 (success)
*/
char *_strchr(char *s, char c)
{
int t = 0;

for (; s[t] >= '\0'; t++)
{
if (s[t] == c)
return (&s[t]);
}
return (0);
}
