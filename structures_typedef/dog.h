#ifndef DOG
#define DOG
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
