#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - nitialize a variable of type struct dog
 * @d: dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}


