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
	unsigned int i, n;
	char *pt;

	if (d == NULL)
		return;
	while (d[i] != '/0')
		i++;
	pt = malloc(sizeof(*d) * i);
	for (n = 0; n <= (i + 1); n++)
		pt[i] = d[i];
	pt->name = name;
	pt->age = age;
	pt->owner = owner;
}
