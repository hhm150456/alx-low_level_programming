#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: lenth of diagonal
 *
 *
 * Return: 1 on success
 * on error, -1 and error set appropriately
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < i; ++j)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
