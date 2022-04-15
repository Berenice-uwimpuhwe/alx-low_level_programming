#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints 1 to 100, fizz for 3x, buzz for 5x, fizzbuzz for 15x
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
		{
			printf("Fizz");
		}
		else if (((i % 5) == 0) && ((i % 3) != 0))
		{
			printf("Buzz");
		}
		else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d",i);
		}
		if (i != 100)
			printf(" ");
		else
			printf("\n")
	}
	return (0);
}
