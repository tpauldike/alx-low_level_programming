#include <stdlib.h>
#include "dog.h"


/**
 * new_dog - creates a new dog.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner
 *
 * Return: struct dog or NULL (if it fails)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int i;
	int _name;
	int _owner;

	newdog = malloc(sizeof(newdog));
	if (newdog == NULL || !(name) || !(owner))
	{
		free(newdog);
		return (NULL);
	}

	for (_name = 0; name[_name]; _name++)
		;

	for (_owner = 0; owner[_owner]; _owner++)
		;

	newdog->name = malloc(_name + 1);
	newdog->owner = malloc(_owner + 1);

	if (!(newdog->name) || !(newdog->owner))
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	for (i = 0; i < _name; i++)
		newdog->name[i] = name[i];
	newdog->name[i] = '\0';

	newdog->age = age;

	for (i = 0; i < _owner; i++)
		newdog->owner[i] = owner[i];
	newdog->owner[i] = '\0';

	return (newdog);
}
