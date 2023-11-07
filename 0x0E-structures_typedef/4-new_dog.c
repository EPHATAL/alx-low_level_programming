#include <stdlib.h>
#include "dog.h"

/**
*_strlen - length of a string
*@s: string
*
*Return: length of the string
*/
int _strlen(char *s)
{
int t;

t = 0;

while (s[t] != '\0')
{
t++;
}
return (t);
}

/**
*_strcpy - string pointer to by src
*including the terminating null byte (\0)
*to the buffer pointed to by dest
*@dest: the buffer in which we copy the string
*@src: string
*
*Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int len, t;
len = 0;
while (src[len] != '\0')
{
len++;
}
for (t = 0; t < len; t++)
{
dest[t] = src[t];
}
dest[t] = '\0';
return (dest);
}

/**
*new_dog - a new dog
*@name: dog name
*@age dog age
*@owner: dog owner
*
*Return: pointer to the new dog (Success), NULL otherwise
*/
{
dog_t *dog;
int len1, len2;
