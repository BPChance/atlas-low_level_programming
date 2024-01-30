#include "main.h"
/**
 * _strlen - entry point
 * @s: char
 * Return: count
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
