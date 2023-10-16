#include "main.h"

/**
 * _strlen - returns string length
 * @s: the reference of string s
 *
 * Return: int  on success,
 * -1 on error set appropriately
*/

int _strlen(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; s[i] != '\0'; ++i)
	{
		++count;
	}
	return (count);
}
