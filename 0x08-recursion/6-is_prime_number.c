#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - this checks if a number is divisible.
 * @num: is the number to be checked.
 * @div: is the divisor.
 * Return: If the number is divisible - 0 else,
 * if the number is not divisible - 1.
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));

}

/**
 * is_prime_number: is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 * Return: If the integer is not prime - 0 If the number is prime - 1.
 */

int is_prime_number(int n)
{
	int div = 5;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}

