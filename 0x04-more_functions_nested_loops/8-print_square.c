#include "main.h"

/**
 * print_square - prints a square
 * @size: length of line
 *
 * Return: 1 on success
 * on error, -1 and error set appropriately
*/

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
