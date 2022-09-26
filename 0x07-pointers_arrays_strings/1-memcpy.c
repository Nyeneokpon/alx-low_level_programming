#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: destination of file to be copied
 * @src: source of file to be copied
 * @n: an integer
 * Return: a string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
