#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: duplicate
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, length;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		length++;
	}

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[length] = '\0';

	return (duplicate);
}
