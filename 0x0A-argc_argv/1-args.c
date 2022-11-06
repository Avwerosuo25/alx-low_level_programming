#include "main.h"
#include <stdio.h>

int main(int argc, int char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]); 
	}
	printf("\n");
}
