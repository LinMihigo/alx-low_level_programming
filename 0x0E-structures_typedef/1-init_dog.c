#include "dog.h"
/**
* init_dog - init. a variable of type struct dog
* @d: pointer to struct dog
* @name: pointer to first struct member
* @age: pointer to second struct member
* @owner: pointer to 3rd struct member
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
