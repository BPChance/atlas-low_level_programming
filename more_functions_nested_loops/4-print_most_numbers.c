#include "main.h"
/**
 * print_most_numbers - entry point
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
		continue;
		}
		_putchar('0' + c);
	}
	_putchar('\n');
}
