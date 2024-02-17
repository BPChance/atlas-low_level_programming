#include "main.h"
/**
 * str_concat - entry point
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len_s1, len_s2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	result = (char *)malloc(len_s1 + len_s2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
