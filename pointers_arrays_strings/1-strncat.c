#include "main.h"
/**
 * *_strncat - entry point
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
	{
		len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}
	return(dest);
}
