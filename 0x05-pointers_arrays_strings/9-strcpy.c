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

	j = -1;
	do {
		++j;
		dest[j] = src[j];
	} while (src[j] != '\0');
	return (dest);
}
