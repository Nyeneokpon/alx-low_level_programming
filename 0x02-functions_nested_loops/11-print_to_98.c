#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 *
 * @n: the starting point of the number
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d ", n);
				n = n + 1;
			}
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d ", n);
				n = n - 1;
			}
		}
	}
}