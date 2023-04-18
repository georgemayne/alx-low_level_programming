#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int rit, geo, g;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (rit = 0; name[rit]; rit++)
		;
	rit++;
	dog->name = malloc(rit * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (g = 0; g < rit; g++)
		dog->name[g] = name[g];
	dog->age = age;
	for (geo = 0; owner[geo]; geo++)
		;
	geo++;
	dog->owner = malloc(geo * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (g = 0; g < geo; g++)
		dog->owner[g] = owner[g];
	return (dog);
}
