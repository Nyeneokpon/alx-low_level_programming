#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: a string whose length is to be gotten
 * @accept: the string to be gotten
 * Return: number of bytes in the substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);
}
