#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
*/

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i;

	char l;

	l = 'a';
	for (l; l <= 'z'; ++l)
	{
		putchar(l);
	}
	putchar('\n');
}
