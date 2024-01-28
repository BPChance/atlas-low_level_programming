#include "main.h"
/**
 * print_square - entry point
 * @size: size of the square in '#'
 * Return: nothing
 */
void print_square(int size)
{
	int i = 0;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
