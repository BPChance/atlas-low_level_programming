#include "main.h"
/*
 *
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int mainsum = 0;
	int antisum = 0;

	for (i = 0; i < size; i++)
	{
		mainsum += a[i * size + i];
		antisum += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", mainsum, antisum);
}
