#include "dog.h"

/**
* _strlen - returns the length of a string
* @s: string to evaluate
*
* Return: the length of the string
*/
int _strlen(char *s)
{
	const char *p = s;

	while (*p++ != '\0')
	;

	return (p - s - 1);
}

/**
* _strcpy - copies the string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while ((*d++ = *src++) != '\0')
	;

	return (dest);
}

/**
* new_dog - creates a new dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
* Return: newly created dog struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	 dog_t *dog;
	int len_name = _strlen(name), len_owner = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len_name + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
