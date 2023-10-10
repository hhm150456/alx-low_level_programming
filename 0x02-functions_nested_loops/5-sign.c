#include "main.h"

/**
 * print_sign - checks if the char is upper
 * @n:  intger value
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriatiely.
 *
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	}
	else
	{
		_putchar('/');
		return (-1);
		_putchar('\n');
	}
}
