#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Prints the alphabet in lowercase'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int s;

	for (s = 0; s < 26; s++)
	{
		putchar(alpha[s]);
	}
	putchar('\n');
	return (0);
}
