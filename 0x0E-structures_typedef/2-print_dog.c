#include <stdio.h>
#include "dog.h"
/**
* print_dog - Entry point
* @d: struct dog *
* Return: Always 0 (Success)
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else if (d->name == NULL || d->age == 0 || d->owner == NULL)
		printf("(nil)");
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

