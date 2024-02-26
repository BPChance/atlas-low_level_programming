#include "variadic_functions.h"
/**
 * sum_them_all - returns sum of all parameters
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int sum = 0;
	unsigned int i;
	/**
	 * if statement taking care of special case
	 */
	if (n == 0)
		return (0);

	va_start(args, n);
	/**
	 * for loop that iterates through the arguments
	 * n number of times.
	 */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
