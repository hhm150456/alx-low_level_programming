#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - writes the last digit
 * @n: The intger value
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int n)
{
	int i;

	if (n >= 0)
	{
		i = n % 10;
	}
	else
	{
		i = ((-1) * (n % 10));
	}
	_putchar(i + '0');
	return (i);
}
