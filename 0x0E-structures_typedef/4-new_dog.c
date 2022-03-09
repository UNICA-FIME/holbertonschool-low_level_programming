#include "dog.h"
/**
 * new_dog -  function that creates a new dog.
 * @name: name of new component
 * @age: year oldi
 * @owner: pointer
 * Return: NULL or ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int j, i, p;
	dog_t *new = NULL;

	if (name == NULL || owner == NULL)
		return (NULL);
	new = (dog_t *)malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; *(name + i) != '\0'; i++)
		;
	i++;
	new->name = (char *)malloc(i * sizeof(char));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		new->name[j] = *(name + j);
	}
	new->age = age;
	for (p = 0; *(owner + p) != '\0'; p++)
	{
		;
	}
	p++;
	new->owner = (char *)malloc(p * sizeof(char));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	for (i = 0; i < p; i++)
	{
		new->owner[i] = *(owner + i);
	}
	return (new);

}
