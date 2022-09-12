#include <stdio.h>
/**
 * main - Entry Point
 * Description: "print all possible combinations of single-digit numbers"
 *
 * Return : Always 0 (Success)
 */
void main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
