#include "main.h"

/**
 * rev_string - returns string
 * @s: the reference of string s
 *
 * Return: 1  on success,
 * -1 on error set appropriately
*/

void rev_string(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		++i;
	}

	while (--i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
