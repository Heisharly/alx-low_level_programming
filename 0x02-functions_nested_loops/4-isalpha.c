#include "main.c"
/**
 * _isalpha - checks for Alphabets
 * @c: - fuction parameters
 * Return: 1 and 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

