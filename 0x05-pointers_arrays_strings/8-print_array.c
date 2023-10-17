#include "main.h"
#include <stdio.h>

/**
 * print_array - returns array
 * @a: the reference ofan array a
 * @n: no of elements
 *
 * Return: 1  on success,
 * -1 on error set appropriately
*/

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; ++j)
	{
		if (j == 0)
		{
			printf("%d", a[j]);
		}
		else
		{
			printf(", %d", a[j]);
		}
	}
	printf("\n");
}
