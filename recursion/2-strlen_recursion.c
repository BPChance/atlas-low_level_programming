#include "main.h"
/**
 * _strlen_recursion - entry point
 * @s: string being counted
 * Return: counter
 */
int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s != '\0')
	{
		counter++;
		counter += _strlen_recursion(s + 1);
	}
	return (counter);
}
