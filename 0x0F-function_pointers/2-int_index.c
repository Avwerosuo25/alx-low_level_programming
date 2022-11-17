#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: number of elements in the array
 * @cmp: A pointer to the function to be used to compare values.
 * Return: the index of the first element for which the cmp function
 * does not return 0;
 * if no element matches, return -1;
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
