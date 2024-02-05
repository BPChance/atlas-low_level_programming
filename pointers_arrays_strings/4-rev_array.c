#include "main.h"
/**
 * reverse_array - entry point
 * @a: pointer to an int
 * @n: number of elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp = 0;
	int i;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
