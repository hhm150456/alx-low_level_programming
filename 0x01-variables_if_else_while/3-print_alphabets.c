#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the entire alphabet in lower and upperc
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
	a = 'A';
	while (a <= 'Z')
	{
		putchar(a);
		++a;
	}
	putchar('\n');
	return (0);
}
