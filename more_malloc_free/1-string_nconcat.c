#include "main.h"
/**
 * string_nconcat - entry point
 * @s1: string 1
 * @s2: string 2
 * Return: result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_1, len_2, concat_len;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_1 = strlen(s1);
	len_2 = strlen(s2);

	if (n >= len_2)
	{
		concat_len = len_2;
	}
	else
	{
		concat_len = n;
	}
	result = malloc(len_1 + concat_len + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncat(result, s2, concat_len);

	return (result);
}
