#include "main.h"

/**
 * _putchar - writes the alphabets to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriatiely.
*/

void print_alphabet(void)
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
