#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 *
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the owner's name
 *
 * Description: informations about the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
