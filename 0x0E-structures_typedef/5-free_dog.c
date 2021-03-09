#include "dog.h"
#include <stdlib.h>
/**
* free_dog - Entry point
* @d: dog_t
* Return: Always 0 (Success)
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
	return (0);
}

