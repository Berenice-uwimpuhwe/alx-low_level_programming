#include "main.h"
/**
 * main - check the code
 * print_alphabet_x10 - prints alphabet 10 times
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
	int i = 0;

	while (i < 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		i++;
		_putchar('\n');
	}
