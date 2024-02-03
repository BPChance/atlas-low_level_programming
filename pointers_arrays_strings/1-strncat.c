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
	int destIndex = 0;
	int srcIndex = 0;
	int counter;

	while (dest[destIndex] != '\0')
	{
		destIndex++;
	}
	dest[destIndex] = '\0';

	while (src[srcIndex] != '\0' && counter <= n)
	{
		src[srcIndex] = dest[destIndex];

		srcIndex++;
		destIndex++;
		counter++;
	}
	return(dest);
}
