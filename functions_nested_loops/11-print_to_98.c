#include "main.h"
/**
 * print_to_98 - prints to 98
 *
 * @n: integer
 */
void print_to_98(int n)
{
		if (n >= 98)
{
		while (n > 98)
		printf("%d, ", n--);

		printf("%d\n", n);
}
		else
{
		while (n < 98)
		printf("%d, ", n++);
		printf("%d\n", n);
}
}
