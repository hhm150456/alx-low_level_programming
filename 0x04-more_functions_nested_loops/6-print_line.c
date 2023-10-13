#include "main.h"

/**
 * print_line - prints a line
 * @n: length of line
 *
 * Return: 1 on success
 * on error, -1 and error set appropriately
*/

void print_line(int n)
{
	char l = '_';

	int i;

	for (i = 0; i < n; ++i)
	{
		_putchar(l);
	}
	_putchar('\n');
}
