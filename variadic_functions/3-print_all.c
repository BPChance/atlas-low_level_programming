#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{	
	char *lofor = (char *)format;
	char c, *s, *separator = "";
	int i;
	int j = 0;
	float f;
	va_list args;
	va_start(args, format);

	while (lofor[j])
	{
		switch (lofor[j])
		{
			case 'c':
				{
					c = va_arg(args, int);
					printf("%s%c", separator, c);
					break;
				}
			case 'i':
				{
					i = va_arg(args, int);
					printf("%s%d", separator, i);
					break;
				}
			case 'f':
				{
					f = va_arg(args, double);
					printf("%s%f", separator, f);
					break;
				}
			case 's':
				{
					s = va_arg(args, char *);
					if (s == NULL)
					{
						printf("(nil)");
						continue;
					}
					if (s != NULL)
					printf("%s%s", separator, s);
					break;
				}
		}
		separator = ", ";
		j++;
	}
	va_end(args);
	printf("\n");
}
