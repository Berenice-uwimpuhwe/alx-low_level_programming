#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: takes in a string
 * Return: always 0
 */

void puts_half(char *str)
{
	int i, n;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
		while (len % 2 == 0)
		{
			n = len / 2;
			_putchar(str[n]);
			n++;
		}
		while (len % 2 != 0)
		{
			n = (len - 1) / 2;
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
