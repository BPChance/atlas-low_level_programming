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
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
