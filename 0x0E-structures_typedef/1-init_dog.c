#include <stdio.h>
#include "dog.h"
/**
* init_dog - Entry point
* @d: struct dog
* @name: struct dog
* @owner: struct dog
* Return: Always 0 (Success)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (0);
}

