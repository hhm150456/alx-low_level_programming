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
	char a;

	a = 'a';
	while (a <= 'f')
	{
		putchar(a);
		++a;
	}
	putchar('\n');
	return (0);
}
