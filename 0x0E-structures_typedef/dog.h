#ifndef _STRUCT_
#define _STRUCT_
#include<stdlib.h>
/**
 * struct dog - create a new struct
 * @name: element name
 * @age: element age
 * @owner: element owner
 * dog_t:  new type of struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
