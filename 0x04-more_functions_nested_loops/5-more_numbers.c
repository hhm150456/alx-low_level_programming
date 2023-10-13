#include "main.h"

/**
 * more_numbers - prints from 0 to 14 10 times
 *
 * Return: 1 on success
 * on error, -1 and error set appropriately
*/

void more_numbers(void)
{
	char n, m;
	int i, j;

	for (i = 0; i < 10; ++i)
	{
		n = '0';
		m = '0';
		for (j = 0; j <= 14; ++j)
		{
			_putchar(n);
			++n;
			if (j >= 10)
			{
				n = '1';
				_putchar(m);
				++m;
			}
			if (n == ':')
			{
				n = '1';
			}
		}
		_putchar('\n');
	}
}
