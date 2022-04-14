#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i = 0, j = 0, a, b;

	while (i < 10)
	{
		while (j <= 14)
		{
			if (j < 10)
			{
				b = j;
			}
			else
			{
				a = j / 10;
				b = j % 10;
				_putchar(a + '0');
			}
			_putchar(b + '0');
			j++;
		}
		i++;

		j = 0;

		_putchar('\n');
	}
}
