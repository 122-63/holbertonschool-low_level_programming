#include "dog.h"
/**
 * init_dog - funcion
 * struct dog - struct
 * @name: puntero
 * @age: puntero
 * @age: variable
 * @owner: puntero
 * @d:puntero
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
