#include "main.h"
/**
 * *_strcat - entry point
 * @*dest: pointer to a char
 * @*src: pointer to a char
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
