#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: (0) Always
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("last digit of %d is %d and is greater than 5/n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("last digit of %d is 0 and is 0\n", n);
	}
	else
	{
		printf("last digit of %d is < 6 and not 0\n", n, last_digit);
	}
	return (0);
}

