#include "main.h"
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Result: sum of two integers
 */
int main(int argc, char *argv[])
{
	int x, y, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	res = x * y;
	printf("%d\n", res);
	return (0);
}
