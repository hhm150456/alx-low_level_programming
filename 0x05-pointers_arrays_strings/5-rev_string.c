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
	int i, j;
	char x;

	i = 0;
	while (s[i])
	{
		++i;
	}
	for (j = 0; j < i / 2; ++j)
	{
		x = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = x;
	}
}
