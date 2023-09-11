#ifndef DOG_MACRO
#define DOG_MACRO

/**
 * struct dog - structure dog
 * @name: name pararmeter
 * @age: age pararmeter
 * @owner: owner pararmeter
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
