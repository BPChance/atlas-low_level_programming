#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 * @separator: string printed between strings
 * @n: number of strings passed in
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/**
	 * initializing args as a va_list
	 */
	va_list args;
	unsigned int i;
	char *str;

	if (n == '\0')
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	/**
	 * for loop loops through args and prints strings
	 * if string is NULL it prints (nil) else prints the string
	 */
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
