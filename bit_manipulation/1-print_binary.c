#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int too_many_zeros = 1;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			too_many_zeros = 0;
		}
		else if (!too_many_zeros)
			_putchar('0');
		mask >>= 1;
	}
}
