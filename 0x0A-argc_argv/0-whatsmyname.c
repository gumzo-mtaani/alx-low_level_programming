#include <stdio.h>
#include "main.h"

/**
 * main . function to print file name
 * @argc: argument count
 * @argv: array of pointers to strings
 */


int main(int argc, char *argv[])
{
	iif (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
