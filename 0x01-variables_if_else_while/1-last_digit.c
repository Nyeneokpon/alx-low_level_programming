#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'Assign a random number to the variable n'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int n;
		int s;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				s == n % 10;

				if (s > 5)
				{
					printf("Last digit of %d is %d and is greater than 5\n", n, s);
				}
				else if (s == 0)
				{
					printf("Last digit of %d is %d and is 0\n", n, s);
				}
				else
				{
					printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s);
				}
				return (0);
}
