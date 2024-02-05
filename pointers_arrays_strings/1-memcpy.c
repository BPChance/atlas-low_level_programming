#include "main.h"
/**
 * _memcpy - entry point
 * @dest: char
 * @src: char
 * @n: unsigned int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		dest[i - 1] = *src;
		n--;
	}
	return (dest);
}
