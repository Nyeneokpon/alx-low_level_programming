#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: a string to be searched
 * @accept: what is accpeted from search
 * Return: string since the first accepted character
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
