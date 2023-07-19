#include "dog.h"

/**
 * new_dog - this function create a new dog.
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
(* a blank line
* Description: this function create a dog)?
(* section header: the header of this function is dog.h)*
* Return: this function returns a struct of a dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{}
	new->name = malloc((i + 1) * sizeof(char));

	for (j = 0; owner[j]; j++)
	{}
	new->owner = malloc((j + 1) * sizeof(char));
	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
		new->name[i] = name[i];
	}
	new->name[i] = '\0';
	for (j = 0; owner[j]; j++)
	{
	new->owner[j] = owner[j];
	}
	new->owner[j] = '\0';
	new->age = age;
	return (new);
}

