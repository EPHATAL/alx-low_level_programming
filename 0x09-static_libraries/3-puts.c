#include "main.h"

/**
*_puts - a string to stdout.
*@str: The string
*_putchar print a new line
*/
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
