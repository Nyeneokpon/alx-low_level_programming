#include <stdio.h>

/**
 * main - this is the function to print its name
 * @argc: this is the argc parameter
 * @argv: this is an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}