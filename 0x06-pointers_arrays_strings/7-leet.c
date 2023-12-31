#include "main.h"

/**
 *leet - encodes string
 *Return: 0
 *@str: char param
 */

char *leet(char *str)
{
	int i;
	char leet_map[256] = {0};

	leet_map['a'] = '4';
	leet_map['A'] = '4';
	leet_map['e'] = '3';
	leet_map['E'] = '3';
	leet_map['o'] = '0';
	leet_map['O'] = '0';
	leet_map['t'] = '7';
	leet_map['T'] = '7';
	leet_map['l'] = '1';
	leet_map['L'] = '1';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (leet_map[(unsigned char) str[i]])
		{
			str[i] = leet_map[(unsigned char) str[i]];
		}
	}

	return (str);
}
