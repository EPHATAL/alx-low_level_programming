#include "main.h"
#include <stdio.h>

/**
*rot13 - encodes rot13
*@s: pointer to string params
*Return: *s
*/
char *rot13(char *s)
{
int y, z;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (y = 0; s[y] != '\0'; y++)
{
for (z = 0; z < 52; z++)
{
if (s[y] == data1[z])
{
s[y] = datarot[z];
break;
}
}
}
return (s);
}
