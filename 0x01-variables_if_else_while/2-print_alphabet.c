#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the entire alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		++a;
	}
	putchar('\n');
	return (0);
}
