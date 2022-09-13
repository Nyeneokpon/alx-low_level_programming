#include "main.h"

/**
 * print_sign -> prints sign of a number based on condition
 * @n: argument passed
 * Return: returns 0, 1 and -1 depending on the condition
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
