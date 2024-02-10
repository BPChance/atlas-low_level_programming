#include "main.h"
/**
 * _strlen_recursion - entry point
 * @s: string being counted
 * Return: counter
 */
int _strlen_recursion(char *s)
{
	int counter;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
