#include <unistd.h>

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

	i = n % 10;
	return (i);
}
