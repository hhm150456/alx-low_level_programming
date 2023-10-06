#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the base 16 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; ++i)
	{
		putchar(i);
	}
	i = 97;
	while (i <= 102)
	{
		putchar(i);
		++i;
	}
	putchar('\n');
	return (0);
}
