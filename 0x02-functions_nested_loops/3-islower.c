#include "main.h"

/**
 * _islower - checks if the char is lower
 * @c:  intger value of char
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriatiely.
 *
*/

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
