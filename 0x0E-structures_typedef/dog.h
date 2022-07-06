#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Informs the user about the dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: A structure in C, named dog that stores some information
 * about any dog, consisting of; the name, age and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
