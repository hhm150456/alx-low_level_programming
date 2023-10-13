#include <stdio.h>

/**
 * main - entry point
 *
 * Description: fizz buzz
 *
 * Return: 1 on success
 * on error, -1 and error set appropriately
*/

int  main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5 == 0) && (i == 100))
		{
			printf("Buzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
