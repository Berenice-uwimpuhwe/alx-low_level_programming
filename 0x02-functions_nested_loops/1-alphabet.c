#include "main.h"
/**
 * main - check the code
 * Description: Program to print alphabet in lower case
 * Return: Always 0.
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();

	_putchar('\n');

	return (0);
}
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i = 'z'; i++)
		_putchar(i);
}
