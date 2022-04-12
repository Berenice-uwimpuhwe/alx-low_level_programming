#include <stdio.h>
/**
 * main - Entry point
 * Description: prints first 98 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, sum;

	printf("%lu", fib1);
	printf(", ");
	printf("%lu", fib2);
	printf(", ");

	for (i = 2; i < 98; i++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (i == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
