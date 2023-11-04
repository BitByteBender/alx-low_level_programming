#include "dog.h"
/**
 * free_dog - a function that frees allocated memory
 * @d: a pointer to dog struct
 * frees if allocated memory for dog struct and its members
 * checks if @d is not NULL
 * frees memory for dog's name, dog's owner and then frees struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
	}
	else
	{
		free(d);
	}
}
