#include "main.h"

int find_sqrt(int x, int y);
int _sqrt_recursion(int n);

/**
 * find_sqrt - function to find the square root of a given number
 * @x - the number
 * @y - The number to test for the square root of @x
 * Return: The square root if the number has a natural square root
 * else, return -1
 */

int find_sqrt(int x, int y)
{
	if ((y * y) == x)
		return (y);
	if (y == x / 2)
		return (-1);

	return (find_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root 
 * of a number using recursion
 * @n: The number to return the square root of.
 * Return: If n has a natural square root, return n else return -1
 */

int _sqrt_recursion(int n)
{
	int y = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
x
	return (find_sqrt(n, y));
}
