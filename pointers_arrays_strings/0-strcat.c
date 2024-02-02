#include "main.h"
/**
 * *_strcat - entry point
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src_ptr != '\0')
	{
		*dest_ptr = *src_ptr;

		dest_ptr++;
		src_ptr++;
	}
	*dest_ptr = '\0';
	return (dest);
}
