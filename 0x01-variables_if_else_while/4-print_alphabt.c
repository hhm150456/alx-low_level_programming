#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints the  alphabet in lowercase without q & e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if ((a == 'q') || (a == 'e'))
		{
			++a;
			continue;
		}
		else
		{
			putchar(a);
			++a;
		}
	}
	putchar('\n');
	return (0);
}
