#include "main.h"
#include <stidlib.h>
/**
 * alloc_grid - Returns a pointer to a 2-D array of integers
 * which initializes the element to 0
 * @width: The width of the 2-D array.
 * @height: The height of the 2-D array.
 * Return: if the width <= 0, height <= 0 or function fails - NULL
 * else, a pointer to the 2-D array
 */

int **alloc_grid(int width, int height);
{
	int **twoD;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		twoD[hgt_index] = malloc(sizeof(int) * width);

		if (twoD[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(twoD[hgt_index]);

			free(twoD);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			twoD[hgt_index][wid_index] = 0;
	}

	return (twoD);
}
