#include "main.h"

/**
 * print_numbers - displayes numbers
 *
 * Return: 1 on success
 * on error, -1 and error set appropriately
*/

void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; ++n)
	{
		_putchar(n);
	}
	_putchar('\n');
}
