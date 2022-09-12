#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Prints the alphabet in lowercase, and then in uppercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int s;
	for (s = 0; s < 52; s++)
	{
		putchar(alpha[s]);
	}
	putchar('\n');
	return (0);
}

