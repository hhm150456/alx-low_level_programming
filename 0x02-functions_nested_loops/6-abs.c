#include <unistd.h>

/**
 * _abs - writes the absolute value
 * @n: The intger value
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n / -1);
	}
}
