#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: number of command linr arg..
 * @argv: array that contains the program command line arg
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(atoi(argv[i])) || atoi(argv[i]) < 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%i\n", sum);
	}
	else
	{
		printf("%i\n", 0);
	}
	return (0);
}
