#include "main.h"
/**
 * _strchr - entry point
 * @s: string being searched
 * @c: char being searched for
 * Return: i if found, NULL if not
 */
char *_strchr(char *s, char c)
{
	int i;
	int length = strlen(s);

	for (i = 0; i < length; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
