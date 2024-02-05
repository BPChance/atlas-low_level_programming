#include "main.h"
/**
 * leet - entry point
 * @str: pointer to a char
 * Return: str
 */
char *leet(char *str)
{
	int i;
	int j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (tolower(str[i]) == "aeotl"[j])
			{
				str[i] = "43071"[j];
				break;
			}
		}
	}
	return (str);
}
