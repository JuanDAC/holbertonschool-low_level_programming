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
	return ((*string == '\0') ? 0 : 1 + length(string + 1));
}
/**
* str_copy - get leng
* @string: char
* Return: dog_t
*/
char *str_copy(char *string)
{
	char *new_str;
	int i;

	if (string == NULL)
		return (NULL);
	new_str = malloc((length(string) + 1) * sizeof(*new_str));
	if (!new_str)
		return (NULL);
	for (i = 0; string[i]; i++)
		*(new_str + i) = *(string + i);
	*(new_str + i) = '\0';
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
	if (my_new_dog == NULL)
		return (NULL);
	my_new_dog->name = str_copy(name);
	my_new_dog->age = age;
	my_new_dog->owner = str_copy(owner);
	return (my_new_dog);
}

