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

	if (n > 98)
	{
		for (i = n; i >= 98; --i)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i );
			}
		}
	}
	else
	{

		for (i = n; i <= 98; ++i)
		{
			if (i == 98)
			{
				printf("%d", i);
				break;
			}
			printf("%d, ", i);
		}
		printf("\n");
	}
}
