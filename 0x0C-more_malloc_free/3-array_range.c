#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the smallest integer in the array
 * @max: the largest integer in the array
 * Return: the pointer to the newly created array, NULL if min > max,
 * NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *ar, b, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ar = malloc(sizeof(int) * size);
	if (ar == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		ar[b] = min++;

	return (ar);
}
