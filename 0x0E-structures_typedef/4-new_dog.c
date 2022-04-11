#include "dog.h"
int get_length(char *s);

/**
 * new_dog - create new dog, store name and owner
 * @name : name
 * @age : age
 * @owner : owner
 * Return: pointer to new-dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	len1 = get_length(name);
	len2 = get_length(owner);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	for (i = 0; i < len2; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	dog->age = age;
	return (dog);
}
/**
 * get_length - get length
 * @s: string
 * Return: length
 */
int get_length(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
