#include <stdio.h>
#include "dog.h"
#define NILL "(nil)"
/**
* print_dog - Entry point
* @d: struct dog *
* Return: Always 0 (Success)
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf(
		"Name: %s\nAge: %f\nOwner: %s\n",
		(d->name == NULL) ? NILL : d->name,
		d->age,
		(d->owner == NULL) ? NILL : d->owner
	);
}

