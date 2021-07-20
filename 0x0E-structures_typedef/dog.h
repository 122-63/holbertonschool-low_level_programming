#ifndef STRUCT_DOG
#define STRUCT_DOG
/**
 * struct dog - estructura
 * @name:variable
 * @age:variable
 * @owner: variable
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
