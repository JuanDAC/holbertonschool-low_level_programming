#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* length - get leng
* @string: char
* Return: dog_t
*/
int length(char *string)
{
	return ((*string == '\0') ? 1 : 1 + length(string + 1));
}
/**
* str_copy - get leng
* @string: char
* Return: dog_t
*/
char *str_copy(char *string)
{
	char *new_str;
	int i, len;

	if (string == NULL)
		return (NULL);
	len = length(string);
	new_str = malloc(sizeof(char) * len);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		new_str[i] = string[i];
	return (new_str);
}
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
	if (!my_new_dog)
		return (NULL);
	my_new_dog->name = str_copy(name);
	if (my_new_dog->name == NULL && name != NULL)
	{
		free(my_new_dog);
		return (NULL);
	}
	my_new_dog->age = age;
	my_new_dog->owner = str_copy(owner);
	if (my_new_dog->owner == NULL && owner != NULL)
	{
		free(my_new_dog);
		free(my_new_dog->name);
		return (NULL);
	}
	return (my_new_dog);
}

