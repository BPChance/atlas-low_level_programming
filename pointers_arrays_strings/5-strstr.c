#include "main.h"
/**
 * _strstr - entry point
 * @haystack: string
 * @needle: substring
 * Return: &haystack[c] or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int c;
	int length = strlen(haystack);

	for (c = 0; c <= length; c++)
	{
		if (haystack[c] == *needle)
			return (&haystack[c]);
	}
	return (NULL);
}
