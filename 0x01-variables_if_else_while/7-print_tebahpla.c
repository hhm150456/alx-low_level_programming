#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the entire alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		--a;
	}
	putchar('\n');
	return (0);
}
