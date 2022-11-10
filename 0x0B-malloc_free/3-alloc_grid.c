#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-D array of int type
 * initialized to 0
 * @width: The width of the 2-dimensional array
 * @height: The height of the 2-dimensional array.
 * Return: NULL if width < 0, height < 0 or function fails
 * else, a pointer to the 2-dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **twoD;
	
