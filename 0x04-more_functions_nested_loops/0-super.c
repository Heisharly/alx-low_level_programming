#include "main.h"
/**
 *_isupper: check for uppercase character
 * @c: function parameters
 * Return: 1 on success and 0 on failure
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}

