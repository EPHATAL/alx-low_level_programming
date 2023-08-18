#include "main.h"

/**
 * more_numbers - from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)

{
	int x;
	int y;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 0 ; y <= 14 ; y++)
		{
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
