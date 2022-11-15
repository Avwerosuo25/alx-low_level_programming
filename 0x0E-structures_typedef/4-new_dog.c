#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to copy
 * Return: a pointer to the duplicated string, NULL if insufficient memory
 * or if @str is NULL
 */

char *_strdup(char *str)
{
	char *ar;
	unsigned int a = 0;
	unsigned int b = 0;

	if (str == NULL)
		return (NULL);
	while (str[a])
		a++;
	ar = malloc(sizeof(char) * (a + 1));
	if (ar == NULL)
		return (NULL);
	while (str[b])
	{
		ar[b] = str[b];
		b++;
	}
	ar[a] = 0;
	return (ar);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *ncpy;
	char *ocpy;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	ncpy = _strdup(name);
	if (!ncpy && name)
	{
		free(new);
		return (NULL);
	}
	ocpy = _strdup(owner);
	if (!ocpy && owner)
	{
		free(ncpy);
		free(new);
		return (NULL);
	}

	new->name = ncpy;
	new->age = age;
	new->owner = ocpy;

	return (new);
}
