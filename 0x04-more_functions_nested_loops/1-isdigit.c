#include "main.h"

/**
 * _isdigit - prints if a char is a digit
 * @c: the chararcter
 *
 * Return: 1 on success
 * on error, -1 and error set appropriately
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
