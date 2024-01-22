#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10x
 * Return: nothing
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i <= 9)
{
	char j;
	for (j = 'a'; j<= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	i++;
}
}
