#include "main.h"
/**
 * _sqrt_recursion - entry point
 * @n: int value
 * Return: natural square root of a number
 */
int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (_sqrt(x, y + 1));
}

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
