#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void);

int main(void)
{
    print_alphabet_x10();
    return (0);
}

void print_alphabet_x10(void)
{
	int i;

	char l;

	for (i = 0; i < 10; ++i)
	{
		l = 'a';
		for (l; l <= 'z';++l)
		{
			putchar(l);
		}
		putchar('\n');
	}
}
