#include <stdio.h>

/**
 * Main. Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (i = 10; i < 16; i++)
	{
		putchar(i + 'a' - 10);
	}
	putchar('\n');
	return (0);
}
