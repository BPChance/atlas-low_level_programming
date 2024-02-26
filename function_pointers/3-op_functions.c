#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - sum
 * @a: int value
 * @b: int value
 */
int op_add(int a, int b)
{
	return(a + b);
}
/**
 * op_sub - difference
 * @a: int
 * @b: int
 */
int op_sub(int a, int b)
{
	return(a - b);
}
/**
 * op_mul - product
 * @a: int
 * @b: int
 */
int op_mul(int a, int b)
{
	return(a * b);
}
/**
 * op_div - result
 * @a: int
 * @b: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return(100);
	}
	return(a / b);
}
/**
 * op_mod - remainder
 * @a: int
 * @b: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return(100);
	}
	return(a % b);
}
