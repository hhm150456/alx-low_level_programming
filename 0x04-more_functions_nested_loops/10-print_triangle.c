#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: base and height
 *
 * Return: 1 on success
 * on error, -1 and error set appropriately
*/

void print_triangle(int size)
{
	int i, j, s, k;

	s = size - 1;
	for (i = 1; (i <= size) && (size != 0); ++i)
	{
		for (k = 1; k <= s; ++k)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; ++j)
		{
			_putchar('#');
		}
		--s;
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
