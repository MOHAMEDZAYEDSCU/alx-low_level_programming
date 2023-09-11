#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure data for dogs
 *
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the name of owner
 *
 * Description: alot of dogs.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/***************************************************
 *
 * it is section for prototypes...
 *
 ***************************************************/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
