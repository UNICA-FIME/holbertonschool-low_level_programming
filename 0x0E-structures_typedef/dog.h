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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
