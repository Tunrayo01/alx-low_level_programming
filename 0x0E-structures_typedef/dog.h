#ifndef DOG_MACRO
#define DOG_MACRO

/**
 * struct dog - structure dog
 * @name: name pararmeter
 * @age: age pararmeter
 * @owner: owner pararmeter
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
