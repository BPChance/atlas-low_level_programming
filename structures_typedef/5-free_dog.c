#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: pointer to struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
