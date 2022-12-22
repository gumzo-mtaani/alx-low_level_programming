#include <stdio.h>

/**
 * main - prints arguments passed
 * @argc: an array
 * @argv: an array of a command listed
 * Return: 0 on success
 */


int main(int argc, char *argv[] __attribute__((unused)))
{
	//Print the number of arguments passed to the program
	int i;

	printf("%d\n", argc - 1);
	return (0);

}
