#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	(void)argv;

	for (a = 0; a <= argc; a++)
	{}
	printf("%d\n", a - 2);

	return (0);
}
