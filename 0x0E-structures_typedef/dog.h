#ifndef DOG_H
#define DOG_H
/**
* struct dog - soy un
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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*DOG*/
