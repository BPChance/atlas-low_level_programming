#include "main.h"
/**
 * rev_string - entry point
 * @s: string
 * Return: nothing
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int middle = length / 2;
	int i;
	char temp;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
