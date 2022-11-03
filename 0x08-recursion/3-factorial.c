#include "main.h"

/**
 * factorial - this returns the factorial of a given number
 * @n: The number to find the factorial of.
 * Return: the factorial of @n
 */

int factorial(int n)
{
	int solution = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	solution *= factorial(n - 1);

	return (solution);
}
