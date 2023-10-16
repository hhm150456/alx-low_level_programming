#include "main.h"

/**
 * swap_int - swaps values
 * @a: the reference of a
 * @b: the reference of b
 *
 * return: 1 on success
 * -1 on error
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
