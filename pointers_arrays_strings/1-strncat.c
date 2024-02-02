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
	int counter;
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src_ptr != '\0')
	{
		if (counter >= n)
		{
			break;
		}

		*dest_ptr = *src_ptr;
		
		dest_ptr++;
		src_ptr++;
		counter++;
	}
	*dest = '\0';
	return (dest);
}
