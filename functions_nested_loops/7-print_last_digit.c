#include "main.h"
/**
 * print_last_digit - prints last digit
 * @q: integer
 * Return: value of the last digit
 */
int print_last_digit(int q)
{
	int num;

	if (q < 0)
		q = -q;
	num = q % 10;
	if (num < 0)
		num = -num;
	_putchar('0' + num);
	return (num);
}
