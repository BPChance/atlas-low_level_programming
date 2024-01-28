#include "main.h"
/**
 * print_diagonal - entry point
 * @n: number of '\' that is printed
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;

	if(n <= 0)
	{
		_putchar('\n');
		return;
	}
	for(i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
}
