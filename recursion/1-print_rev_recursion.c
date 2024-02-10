#include "main.h"
/**
 * _print_rev_recursion - entry point
 * @s: string getting reversed
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
