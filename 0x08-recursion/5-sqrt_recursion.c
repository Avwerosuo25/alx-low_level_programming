#include "main.h"

/**
 * square_root - find the natural square root
 * @a: number
 * @b: increment
 * Return: the number found
 */

int square_root(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a * a > b)
	{
		return (-1);
	}
	else
	{
		return (square_root(a + 1, b));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: the natural square root found
 */

int _sqrt_recursion(int n)
{
	int a = 1;

	return (square_root(a, n));
}

