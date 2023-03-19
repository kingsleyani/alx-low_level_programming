#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print the last digit of randomly generated number
 * and whether it is greater than 5, less than 6 or 0.
 *Description: Print statements based on the last digit of the random number
 * return: Always 0.
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{		printf("Last digit of %i is %i and is 0\n", n, m);
	}
	else
	{
		printf("last digit of %i is %i and is less than 6 and not0\n", n, m);
	}
	return (0);
}
