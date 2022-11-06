#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program takes first two int arguments and prints the product
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if arguments passed in not enought, 0 if otherwise
 */

int main(int argc, char *argv[])
{
	int a, b, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mult = a * b;

	printf("%i\n", mult);

	return (0);
}
