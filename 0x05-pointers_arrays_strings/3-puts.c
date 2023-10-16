#include "main.h"

/**
 * _puts - returns string
 * @str: the reference of string s
 *
 * Return: 1  on success,
 * -1 on error set appropriately
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n')			;
}
