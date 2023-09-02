#include <stdio.h>
#include "main.h"

/**
*main - print all receives argument
*@argc: arguments number
*@argv: arguments array
*
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int t;
for (t = 0; t < argc; t++)
{
printf("%s\n", argv[t]);
}

return (0);
}
