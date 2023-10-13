#include "main.h"

/**
 * print_most_numbers - displayes numbers except 2 and 4
 *
 * Return: 1 on success
 * on error, -1 and error set appropriately
*/

void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; ++n)
	{
		if ((n == '2') || (n == '4'))
		{
			continue;
		}
		else
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
