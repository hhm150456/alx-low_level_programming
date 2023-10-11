#include "main.h"

/**
 * times_table - prints the time tables 1-9
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if (j == 9)
			{
				printf("%d", i * j);
			}
			else
			{
				printf("%d, ", i * j);
			}
		}
		printf("\n");
	}
}
