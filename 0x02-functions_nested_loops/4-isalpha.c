#include "main.h"

/**
 * _isalpha - checks if the char is upper
 * @c:  intger value of char
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriatiely.
 *
*/

int _isalpha(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
