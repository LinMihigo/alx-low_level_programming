#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
* struct dog - a dog's details
* @name: first member
* @age: second member
* @owner: 3rd member
* Description: contains a dog's name, age, and owner name.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
