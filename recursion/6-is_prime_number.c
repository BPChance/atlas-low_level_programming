#include "main.h"
/**
 * is_prime_number - entry point
 * @n: int value
 * Return: 1 if prime, otherwise 0
 */

int prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
/**
 * prime - entry point
 * @n: int value
 * @i: int value
 * Return: prime
 */
int prime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime(n, i + 1));
	}
}
