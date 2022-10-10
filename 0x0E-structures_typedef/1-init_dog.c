#include "dog.h"
/**
 * init_dog - initialize a vsriable of type struct dog
 * @d: pointer to struct type dog
 * @name: pointer to char name of dog
 * @age: pointer to age of dog
 * @owner: pointer to char owner of dog
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
