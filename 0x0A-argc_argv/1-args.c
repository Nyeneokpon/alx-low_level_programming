#include <stdio.h>

/**
 * main - the function to print a number
 * @argc: the argc parameter
 * @argv: an array of the command listed
 * Return: 0 for success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
