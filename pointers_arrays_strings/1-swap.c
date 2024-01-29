#include "main.h"
/**
 * swap_int - entry point
 * @a: integer
 * @b: integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
