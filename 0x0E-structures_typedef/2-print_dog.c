#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
if (d)
{
if (!(d->name))
	printf("Name: (nill)\n");
else
	printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);

if (!(d->owner))
	printf("Owner: (nill\n");
else
	printf("Owner: %s\n", d->owner);
}
}
