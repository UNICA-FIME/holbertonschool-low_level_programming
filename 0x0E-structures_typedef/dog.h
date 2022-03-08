#ifndef _STRUCT_
#define _STRUCT_
/**
 * struct dog - create a new struct
 * @name: element name
 * @age: element age
 * @owner: element owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
