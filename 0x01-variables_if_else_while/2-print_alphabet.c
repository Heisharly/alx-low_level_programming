#include <stdio.h>
/**
 * main - A program that prints Alphabet in lowercase followed by a newline
 *
 * Return: (0) Always
 */
int main(void)
{
	char letter = 'a';

	printf("Alphabet in lowercase:\n");

	while (letter <= 'z')
	{
		putchar(letter);
		putchar('');
		letter++;
	}
	putchar('\n');
	return (0);
}

