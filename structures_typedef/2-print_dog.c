#include "dog.h"
#include <stdio.h>

/**
* print_dog - function that prints a struct dog
* @d: structure
*
*/

void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}
	else
	{
	printf("name: ");
	d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
	printf("age: ");
	d->age <= 0 ? printf("%f\n", d->age) : printf("%f\n", d->age);
	printf("owner: ");
	d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
