#include <stdio.h>

/**
 * main - prints arguments
 * @argc: int
 * @argv: char
 * Return: 0 on success
 */


int main(int argc, char *argv[])
{
	int i;
	
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	
	return (0);

}
