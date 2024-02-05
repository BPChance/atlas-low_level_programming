#include "main.h"
/**
 * _memset - entry point
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
