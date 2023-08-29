#include "dog.h"
#include <stdlib.h>

/**
* init_dog - initialize structure of type dog.
*
* @d: structure object
* @name: 1st member, name of dog
* @age: 2nd member, age of dog
* @owner: 3rd member, pointer to the owner of dog
*
* Return: void.
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
