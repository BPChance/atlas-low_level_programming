#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	while (*name != '\0')
	{
		(*f)(name);
		name++;
	}
}
