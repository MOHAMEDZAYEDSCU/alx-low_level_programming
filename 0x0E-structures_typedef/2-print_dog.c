#include "dog.h"
#include <stdio.h>

/**
 * print_dog - get the data of dogs
 *
 * @d: pointer to element to the structure
 *
 * Return: no return for coid function.
 */

void print_dog(struct dog *d)
{

	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
