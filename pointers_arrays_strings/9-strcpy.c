#include "main.h"
/**
 * _strcpy - entry point
 * @dest: char
 * @src: char
 * Return: og
 */
char *_strcpy(char *dest, char *src)
{
	char *og = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (og);
}
