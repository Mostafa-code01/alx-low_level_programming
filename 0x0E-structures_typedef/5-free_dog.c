#include <stdlib.h>
	#include "dog.h"


	/**
	 * free_dog - frees memory allocated for a struct dog
	 * created
	 *
	 * @d: pointer to dog_t
	 */
void free_dog(dog_t *d)
	{
		if (d != NULL)
		{
			free(d->name);
			free(d->owner);
			free(d);
		}
	}
