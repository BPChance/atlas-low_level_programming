#ifndef DOG
#define DOG
#include <stddef.h>
/**
 * struct dog - dog info
 * @name: dog name
 * @age: dog age probably not in dog years
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
