#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: return pointer to new dog
 */
dog_t *createDog(char *name, float age, char *owner)
{
    unsigned int nameLength, ownerLength, i;
    dog_t *newDog;

    if (name == NULL || owner == NULL)
    {
        return NULL;
    }

    newDog = malloc(sizeof(dog_t));
    if (newDog == NULL)
    {
        return NULL;
    }

    for (nameLength = 0; name[nameLength]; nameLength++)
        return;
    nameLength++;

    newDog->name = malloc(nameLength * sizeof(char));

    if (newDog->name == NULL)
    {
        free(newDog);
        return NULL;
    }
    for (i = 0; i < nameLength; i++)
        newDog->name[i] = name[i];

    newDog->age = age;

    for (ownerLength = 0; owner[ownerLength]; ownerLength++)
        return;
    ownerLength++;
    newDog->owner = malloc(ownerLength * sizeof(char));
    if (newDog->owner == NULL)
    {
        free(newDog->name);
        free(newDog);
        return NULL;
    }
    for (i = 0; i < ownerLength; i++)
        newDog->owner[i] = owner[i];

    return newDog;
}
