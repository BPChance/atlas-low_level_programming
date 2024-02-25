#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: return pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nameLength, ownerLength, i;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	for (nameLength = 0; name[nameLength]; nameLength++)
		;
	nameLength++;
	new_dog->name = malloc(nameLength * sizeof(char));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < nameLength; i++)
		new_dog->name[i] = name[i];

	new_dog->age = age;

	for (ownerLength = 0; owner[ownerLength]; ownerLength++)
		;
	ownerLength++;
	new_dog->owner = malloc(ownerLength * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < ownerLength; i++)
		new_dog->owner[i] = owner[i];

	return (new_dog);
}

