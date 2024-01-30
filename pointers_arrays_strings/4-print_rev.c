#include "main.h"
/**
 * print_rev - entry point
 * @s: char
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
