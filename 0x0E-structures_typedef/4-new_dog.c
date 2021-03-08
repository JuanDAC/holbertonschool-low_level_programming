#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* new_dog - Entry point
* @name: char
* @age: char
* @owner: char
* Return: dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_new_dog;

	my_new_dog = malloc(sizeof(dog_t));
	if (my_new_dog == NULL)
		return (NULL);
	my_new_dog->name = name;
	my_new_dog->age = age;
	my_new_dog->owner = owner;

	return (my_new_dog);
}

