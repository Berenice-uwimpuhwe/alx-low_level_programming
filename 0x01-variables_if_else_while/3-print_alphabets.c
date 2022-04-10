#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0, b = 0; a < 26, b < 26; a++, b++)
		putchar('a' + a);
		putchar('A' + b);
	putchar('\n');
	return (0);
}
