#include "main.h"

/**
 * _isdigit - checks for 0 through 9
 * @c: character to check parameter
 *
 * Return: 0 or 1
 */
int _isdigit(int c)

{
if (c >= 48 && c <= 57)
return (1);
else
return (0);

}
