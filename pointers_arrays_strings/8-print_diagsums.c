#include "main.h"
/*
 *
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int mainsum = 0;
	int antisum = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (i == j)
			{
			mainsum += a[i * size + i];
			}
			if (i + j == size - 1)
			{
			antisum += a[i * size + (size - 1 - i)];
			}
		}
	}
	printf("%d, %d\n", mainsum, antisum);
}
