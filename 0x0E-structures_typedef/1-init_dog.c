#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: location to store this variable
 * @name: name of dog
 * @age: age of dog
 * @owner: who owns the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
