#include "main.h"
/**
 * array_range - entry point
 * @min: min value
 * @max: max value
 * Return: arr
 */
int *array_range(int min, int max)
{
	int size, *arr, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
