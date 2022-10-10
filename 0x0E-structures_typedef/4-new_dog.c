#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *smart;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	smart = malloc(sizeof(dog_t));
	if (smart == NULL)
	{
		free(smart);
		return (NULL);
	}
	smart->name = malloc(i * sizeof(smart->name));
	if (smart->name == NULL)
	{
		free(smart->name);
		free(smart);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		smart->name[k] = name[k];
	smart->age = age;
	smart->owner = malloc(j * sizeof(smart->owner));
	if (smart->owner == NULL)
	{
		free(smart->owner);
		free(smart->name);
		free(smart);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		smart->owner[k] = owner[k];
	return (smart);
}
