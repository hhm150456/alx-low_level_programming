#include "main.h"

/**
 * print_alphabet_x10 - writes the alphabets to stdout 10 times
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriatiely.
 *
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		char l;

		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			++l;
		}
		_putchar('\n');
	}
}
