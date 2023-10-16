#include "main.h"

/**
 * puts_half - returns string
 * @str: the reference of string s
 *
 * Return: 1  on success,
 * -1 on error set appropriately
*/

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i])
	{
		++i;
	}
	if (i % 2 == 0)
	{
		for (j = (i) / 2; j < i; ++j)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
	else
	{
		for (j = (i - 1) / 2; j < i; ++j)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
}
