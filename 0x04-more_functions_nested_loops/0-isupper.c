#include "main.h"

/**
 * _isupper - prints if a char is uppercase
 * @c: the chararcter
 *
 * Return: 1 on success
 * on error, -1 and error set appropriately
*/

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
