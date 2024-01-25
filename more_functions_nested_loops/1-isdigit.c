#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: integer value c
 * Return: 1 if true 0 if false
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
