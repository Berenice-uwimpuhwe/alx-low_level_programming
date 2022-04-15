#include "main.h"

/**
 * print_number - prints an integer
 * @n: takes in an integer
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		a = n;
	}
	if (a / 10 != 0)
		print_number(a / 10);
	_putchar((a % 10) + '0');
}
