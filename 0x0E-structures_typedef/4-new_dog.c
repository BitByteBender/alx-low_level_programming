#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * new_dog - creates and inits a new dog(poppy) struct
 * @name: pointer to a char (dog's name)
 * @age: floating point value (dog's age)
 * @owner: pointer to a char (dog's owner)
 * Used malloc to allocate memory for ptr d_t of type dog_t*
 * checks if d_t NULL or not
 * if NULL free memory and return NULL
 * Return:
 * a pointer to newly create dog struct
 * or
 * NULL if the allocated memory failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d_t;

	d_t = (dog_t *)malloc(sizeof(dog_t));

	if (d_t == NULL)
	{
	free(d_t);
	return (NULL);
	}
	else
	{
	d_t->name = name;
	d_t->age = age;
	d_t->owner = owner;
	}
	return (d_t);
}
