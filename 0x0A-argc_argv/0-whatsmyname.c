#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of pointers to strings
 * Return: 0 on success
 */


int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
