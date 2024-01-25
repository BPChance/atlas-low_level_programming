#include "main.h"
/**
 * _isupper - checks if character is uppercase
 * 
 * Return: 1 if true, else 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
