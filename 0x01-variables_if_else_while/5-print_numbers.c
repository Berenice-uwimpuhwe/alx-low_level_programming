#include <stdio.h>
/**
 * main -Entry point
 *
 * Result: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = '0'; x < '10'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
