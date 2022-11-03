#include "main.h"

/**
 * pow_recursion - this returns the value of x raised to power y
 * @x: The number
 * @y: The power of which @x will be raise to
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
