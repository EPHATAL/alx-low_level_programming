#include "main.h"

/**
*print_diagonal - draw a diagonal line on the terminal
*@n: no of times the character \ should be printed
*
*/

void print_diagonal(int n)

{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int k, m;

		for (k = 0; k < n; k++)
		{
			for (m = 0; m < n; m++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
