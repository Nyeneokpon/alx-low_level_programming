#include <stdio.h>

/**
 * main - this represents the print function
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
