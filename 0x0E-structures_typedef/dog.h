#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - dog
 * @name : name
 * @age : age
 * @owner : owner
 *
 * Description : Struct for learning how to use structs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
