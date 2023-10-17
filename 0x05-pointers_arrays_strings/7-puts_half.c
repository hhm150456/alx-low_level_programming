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
	int i;

	i = 0;
	while (str[i])
	{
		++i;
	}
	for (i /= 2; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
