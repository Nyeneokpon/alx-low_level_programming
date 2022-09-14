#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	int n, a;

	for (n = 0; n <= 9; n++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
