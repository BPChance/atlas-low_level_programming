#include "main.h"
/**
 * more_numbers - entry point
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
		if (c >= 10)
			_putchar('0' + c / 10);
		_putchar('0' + c % 10);
		}
		_putchar('\n');
	}
}
