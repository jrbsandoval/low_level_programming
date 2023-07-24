#include "dog.h"

/**
 *
 *
 *
 *
 *
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");

	if (d->age == 0 || d->owner == NULL)
		printf("(nil)");

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
