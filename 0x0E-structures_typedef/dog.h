#ifndef DOG_H
#define DOG_H
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
* struct dog - soy un struct
* @name: char
* @age: char
* @owner: char
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog;
#endif /*DOG*/
