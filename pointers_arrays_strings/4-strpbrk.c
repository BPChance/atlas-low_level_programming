#include "main.h"
/**
 * _strpbrk - entry point
 * @s: string
 * @accept: pointer to a char
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			if (*s == accept[c])
				return (s);
		}
		s++;
	}
	return ('\0');
}
