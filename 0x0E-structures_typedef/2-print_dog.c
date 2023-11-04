#include "dog.h"
#include <stdio.h>
/**
 * print_dog - func that prints members of a dog struct
 * @d: pointer to dog struct
 */
void print_dog(struct dog *d)
{
	if (!(d == NULL))
	{
	printf("Name: %s\nAge: %f\nOwner: %s\n",
	((*d).name != NULL ? d->name : "(nil)"),
	((*d).age != 0 ? d->age : 0),
	((*d).owner != NULL ? d->owner : "(nil)"));
	}
}
