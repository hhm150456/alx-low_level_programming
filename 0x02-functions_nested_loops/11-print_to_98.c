#include "main.h"

/**
 * print_to_98 - a function that from a specific n to 98
 * @n: starting number
 *
 * Return: On success 1.
 * On error, -1 and error is set appropriately
*/

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; ++i)
	{
		printf("%d, ", i);
	}
	printf("\n");
}
