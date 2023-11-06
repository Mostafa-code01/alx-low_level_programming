#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a struct creat a dog info
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Description: Longer description
 */

typedef struct dog
{
		char *name;
		float age;
		char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
