#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @x: character to be encoded
 * Return: string
 */

char *rot13(char *x)
{
	int count = 0, i;

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(x + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(x + count) == alpha[i])
			{
				*(x + count) = rot13[i];
				break;
			}
		}
		count++;
	}
	return (x);
}
