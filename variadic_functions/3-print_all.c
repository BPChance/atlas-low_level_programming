#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{	
	char *lofor = (char *)format;
	char c;
	int i;
	float f;
	char *s;
	va_list args;
	va_start(args, format);
	
	while (*format)
	{
		switch (*format)
		{
			case 'c':
				{
					c = va_arg(args, int);
					printf("%c", c);
					break;
				}
			case 'i':
				{
					i = va_arg(args, int);
					printf("%d", i);
					break;
				}
			case 'f':
				{
					f = va_arg(args, double);
					printf("%f", f);
					break;
				}
			case 's':
				{
					s = va_arg(args, char *);
					if (s == NULL)
					{
						printf("(nil)");
					}
					else
					{
						printf("%s", s);
					}
					break;
				}
		}
		lofor++;
	}
	va_end(args);
	printf("\n");
}
