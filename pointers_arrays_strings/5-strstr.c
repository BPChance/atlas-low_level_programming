#include "main.h"
/**
 * _strstr - entry point
 * @haystack: string
 * @needle: substring
 * Return: &haystack[c] or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1;
	char *p2;
	char *p3;

	if (*needle == '\0')
	{
		return (haystack);
	}

	p1 = haystack;
	p2 = needle;

	while (*p1 != '\0')
	{
		if (*p1 == *p2)
		{
			p3 = p1;
			while (*p2 != '\0' && *p3 != '\0' && *p2 == *p3)
			{
				p2++;
				p3++;
			}
			if (*p2 == '\0')
			{
				return (p1);
			}
		}
		p1++;
	}
	return (NULL);
}
