#include "main.h"

/**
 * puts2 - returns string
 * @str: the reference of string s
 *
 * Return: 1  on success,
 * -1 on error set appropriately
*/

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i])
	{
		++i;
	}
	for (j = 0; j < i; ++j)
	{
		if (j == 0)
		{
			_putchar(str[j]);
		}
		else if (j % 2 != 0)
		{
			continue;
		}
		else
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
