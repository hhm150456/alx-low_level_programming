#include "main.h"

/**
 * jack_bauer - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; ++i)
	{
		for (j = 0; j < 60; ++j)
		{
			printf("%02d:%02d\n", i, j);
		}
	}
}
