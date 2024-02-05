#include "main.h"
/**
 *
 *
 *
 */
char *string_toupper(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}
