#include "dog.h"

/**
 * init_dog - get the data of dogs
 *
 * @*d: pointer to element to the structure
 * @name: poiner to the name of the dog
 * @age: the dog's age
 * @owner: the owner name.
 *
 * Return: no return for coid function.
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
