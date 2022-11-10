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
	int *a;
	int b;
	int c = 0;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);

	for (b = min; b <= max; b++)
	{
		a[c] = b;
		c++;
	}

	return (a):
}
