#include "dog.h"
#include <stdlib.h>
/**
* free_dog - Entry point
* @d: dog_t
* Return: Always 0 (Success)
*/
void free_dog(dog_t *d)
{
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	if (d != NULL)
		free(d);
	return (0);
}

