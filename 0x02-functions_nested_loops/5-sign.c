#include "main.h"
/**
 * print_sign - Prints sign of a number
 * @n: - function parameters
 * Return: (0, 10 or  -1)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('a');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

