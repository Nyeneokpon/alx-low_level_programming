#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: integer params
 */

void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n);
	}
	_putchar('\n'):
}
