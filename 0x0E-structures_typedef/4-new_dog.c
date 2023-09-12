#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calculates length of a string
 * @s: String
 * Return: Number of characters in string
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count++])
		;

	return (--count);
}

/**
 * _strcpy - copies string from src to dest
 * @dest: destination pointer
 * @src: source pointer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (0);
	new_dog->age = age;

	new_dog->name = malloc(_strlen(name) + 1);
	if (!new_dog->name)
	{
		free(new_dog);
		return (0);
	}
	_strcpy(new_dog->name, name);

	new_dog->owner = malloc(_strlen(owner) + 1);
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (0);
	}
	_strcpy(new_dog->owner, owner);
	return (new_dog);
}
