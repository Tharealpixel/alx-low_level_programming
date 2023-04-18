#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len;
	char *new_name, *new_owner;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	name_len = 0;
	while (name[name_len] != '\0')
		name_len++;
	owner_len = 0;
	while (owner[owner_len] != '\0')
		owner_len++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_name = malloc(sizeof(char) * (name_len + 1));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_owner = malloc(sizeof(char) * (owner_len + 1));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	for (int i = 0; i <= name_len; i++)
		new_name[i] = name[i];
	for (int i = 0; i <= owner_len; i++)
		new_owner[i] = owner[i];
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
