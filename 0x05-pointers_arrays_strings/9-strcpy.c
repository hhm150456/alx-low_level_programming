#include "main.h"

/**
 * _strcpy - returns string copy
 * @dest: destination str
 * @src: the reference of string s
 *
 * Return: 1  on success,
 * -1 on error set appropriately
*/

char *_strcpy(char *dest, char *src)
{
	int j;

	j = 0;
	for (j = 0; src[j] != '\0'; ++j)
	{
		dest[j]= src[j];
	}
	return (dest);
}
