#include "main.h"

/**
*print_diagonal - draw a diagonal line
*using the '\' character in the terminal
*@n: no of times the character '\' should be printed
*
*Return: Always 0.
*/

void print_diagonal(int n)

{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int k, m;

		for (k = 1; k <= n; k++)
		{
			for (m = 1; m <= k - 1; m++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
