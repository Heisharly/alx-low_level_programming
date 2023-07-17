#include <stdio.h>
/**
 * main - A program that prints Alphabet in lowercase followed by a newline
 *
 * Return: (0) Always
 */

int main(void)
{
	char i = 'a';

	printf("Alphabet in lowercase:\n");

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}

