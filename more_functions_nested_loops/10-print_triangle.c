#include "main.h"
/**
 * print_triangle - entry point
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int c, a;

	if (size > 0)
	{
		for (c = 1; c <= size; c++)
		{
			for ((a = size - c); a > 0; a--)
			_putchar(' ');

			for (a = 0; a < c; a++)
			_putchar('#');

			if (c == size)
			continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
