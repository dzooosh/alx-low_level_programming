#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type dog
 * @d: dog type
 * @name: name of dog
 * @age: age
 * @owner: owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
