#include "main.h"
/**
 * malloc_checked - entry point
 * @b: amount of bytes needed
 * Return: pointer to allocated memory if success, otherwise value of 98
 */
void *malloc_checked(unsigned int b)
{
	
	void *allocated_memory = malloc(b);

	if (allocated_memory != NULL)
	{
		return (allocated_memory);
	}
	else
	{
		exit(98);
	}
}
