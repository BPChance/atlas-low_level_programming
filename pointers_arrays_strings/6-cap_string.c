#include "main.h"
/**
 * cap_string - entry point
 * @str: pointer to a char
 * Return: str
 */
char *cap_string(char *str)
{
	int new_word = 1;
	int i;

	for (i = 0; str[i]; i++)
	{
		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			new_word = 1;
			break;
		default:
			if (new_word && isalpha(str[i]) && (!isdigit(str[i - 5])))
			{
				str[i] = toupper((unsigned char)str[i]);
				new_word = 0;
			}
			break;
		}
	}
	return (str);
}
