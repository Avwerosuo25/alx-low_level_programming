#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of elements
 * @size: the size of each array element
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 * else, a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		a[i] = 0;

	return (a);
}
