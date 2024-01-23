#include "main.h"
/**
 * times_table - prints times table
 * Description - prints times table
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
{
	int result = i * j;
	_putchar(result / 10 + '0');
	_putchar(result % 10 + '0');
	_putchar(',');
	_putchar(' ');
}
	_putchar('\n');
}
}

